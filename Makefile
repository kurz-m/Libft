# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 09:39:14 by makurz            #+#    #+#              #
#    Updated: 2023/04/21 08:56:08 by makurz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the name of the library
NAME := ./lib/libft.a

# Set compiler and debugger according to OS
UNAME := $(shell uname)
ifeq ($(UNAME), Linux)
	CC := gcc
	DB := gdb
	CFLAGS ?= -Wall -Wextra -Werror -fsanitize=leak
else ifeq ($(UNAME), Darwin)
	CC := cc
	DB := lldb
	CFLAGS ?= -Wall -Wextra -Werror -g3
else
	$(error Unsupported operating system: $(UNAME))
endif

# Add the necessary flags for Compiling
# Can be changed in the command line
LDFLAGS ?=
ARFLAGS := -rcs

# Add the remove command
RM := rm -f

# Add paths for the source files
VPATH =	\
		src/array src/char src/gnl src/io src/list src/memory		\
		src/string src/printf

# Explicitly state all function names for better modularity
SRC_ARR :=	\
			ft_arrdup.c ft_arrfree.c ft_arrlen.c

SRC_CHAR :=	\
			ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c		\
			ft_iscntrl.c ft_isdigit.c ft_isinstr.c ft_isinstr.c		\
			ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c		\
			ft_isxdigit.c ft_tolower.c ft_toupper.c

SRC_GNL :=	\
			ft_get_next_line.c ft_get_next_line_utils.c

SRC_IO :=	\
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

SRC_LIST :=	\
			ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c		\
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c	\
			ft_lstnew.c ft_lstsize.c

SRC_MEM :=	\
			ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c			\
			ft_memcpy.c ft_memmove.c ft_memset.c

SRC_STR :=	\
			ft_atoi.c ft_itoa.c ft_split.c ft_strchr.c ft_strcmp.c	\
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c		\
			ft_strlcpy.c ft_strlen.c ft_strlen_c.c ft_strmapi.c		\
			ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c		\
			ft_strtrim.c ft_substr.c

# Combine all the sources
SRCS :=		\
			$(SRC_ARR) $(SRC_CHAR) $(SRC_GNL) $(SRC_IO) $(SRC_LIST)	\
			$(SRC_MEM) $(SRC_STR)

# Define a directory for object files
OBJ_DIR := ./_obj
OBJ_DIR_DEBUG := ./_obj_debug

# Substitute the suffix .c with .o for the object files
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:ft_%.c=%.o))

# Specify folder for header file
INC := -I ./header

# Create object files for debugging
OBJS_DEBUG := $(addprefix $(OBJ_DIR_DEBUG)/, $(SRCS:ft_%.c=%.o))

# Color codes
Y := "\033[33m"
C := "\033[36m"
R := "\033[31m"
G := "\033[32m"
X := "\033[0m"
UP := "\033[A"
CUT := "\033[K"

all: $(NAME)
	@printf "\n"
	@echo $(G)"      :::        ::::::::::: :::::::::  :::::::::: :::::::::::"
	@echo $(G)"     :+:            :+:     :+:    :+: :+:            :+:"
	@echo $(G)"    +:+            +:+     +:+    +:+ +:+            +:+"
	@echo $(G)"   +#+            +#+     +#++:++#+  :#::+::#       +#+"
	@echo $(G)"  +#+            +#+     +#+    +#+ +#+            +#+"
	@echo $(G)" #+#            #+#     #+#    #+# #+#            #+#"
	@echo $(G)"########## ########### #########  ###            ###"$(X)
	@printf "\n"

$(NAME): $(OBJS)
	@mkdir -p lib
	@echo $(Y)Compiling [$(NAME)]...$(X)
	@ar $(ARFLAGS) $(NAME) $(OBJS)
	@printf $(UP)$(CUT)
	@echo $(G)Finished"  "[$(NAME)]...$(X)

# Create a static rule for compiling from source to object file
$(OBJ_DIR)/%.o: ft_%.c
	@echo $(Y)Compiling [$@]...$(X)
	@mkdir -p _obj
	@$(CC) $(CFLAGS) -MMD -MP -c $< $(INC) -o $@
	@printf $(UP)$(CUT)

# Cleans only the object files if they exist
clean:
	@if [ -d "${OBJ_DIR}" ]; then \
		echo $(R)Cleaning"  "[$(OBJ_DIR)]...$(X); \
		rm -r ${OBJ_DIR}; \
		echo $(G)Cleaned!$(X); \
	fi

# Cleans the debug files if ran with -g flag
clean_debug:
	@if [ -d "${OBJ_DIR_DEBUG}" ]; then \
		echo $(R)Cleaning"  "[$(OBJ_DIR_DEBUG)]...$(X); \
		rm -r ${OBJ_DIR_DEBUG}; \
		echo $(G)Cleaned!$(X); \
	fi

# Cleans also the library
fclean: clean clean_debug
	@if [ -f "$(NAME)" ]; then \
		echo $(R)Cleaning"  "[$(NAME)]...$(X); \
		rm -r $(dir $(NAME)); \
		echo $(G)Cleaned!$(X); \
	fi

# Cleans all object files and also the library and newly create the library
re: fclean all

# Runs the compiler with the debugger flag
debug: $(OBJS_DEBUG)
	$(CC) $(CFLAGS) -g $^ $(LIB) -o debug
	$(DB) debug

# Rule for the debug compilation
$(OBJ_DIR_DEBUG)/%.o: ft_%.c
	@echo $(Y)Compiling [$@]...$(X)
	@mkdir -p _obj_debug
	@$(CC) $(CFLAGS) -g -MMD -MP -c $< $(INC) -o $@
	@printf $(UP)$(CUT)

# Tell the Makefile that all those commands are actual commands and not files
.PHONY: all clean fclean debug re

-include $(OBJ:%.o=%.d)
# 	For later use
# 	@printf "\n"
# 	@echo $(G)"                       **"
# 	@echo $(G)"                      /**"
# 	@echo $(G)"  **********   ******  /**  ** **   ** ****** ******"
# 	@echo $(G)" //**//**//** //////** /** ** /**  /**//**//*////**"
# 	@echo $(G)"  /** /** /**  ******* /****  /**  /** /** /    **"
# 	@echo $(G)"  /** /** /** **////** /**/** /**  /** /**     **"
# 	@echo $(G)"  *** /** /**//********/**//**//******/***    ******"
# 	@echo $(G)" ///  //  //  //////// //  //  ////// ///    //////"$(X)
# 	@printf "\n\n"
