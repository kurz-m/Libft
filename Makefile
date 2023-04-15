# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 09:39:14 by makurz            #+#    #+#              #
#    Updated: 2023/04/15 16:33:32 by makurz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the name of the library
NAME := libft.a

# Define the compiler the Makefile should use
CC := gcc

# Add the neccessary flags for compiling 
CFLAGS ?= -Wall -Wextra -Werror
LDFLAGS ?=
ARFLAGS := -rcs

# Add the remove command
RM := rm -f

# Add paths for the source files
VPATH = src/

# Explicitly state all function names for the mandatory part
SRCS :=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c	\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c			\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c		\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c		\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c			\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c		\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c		\
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c				\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c			\
		ft_lstmap.c

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
R := "\033[31m"
G := "\033[32m"
B := "\033[34m"
X := "\033[0m"
UP := "\033[A"
CUT := "\033[K"

# Main rule to compile Libft
all: $(NAME)
	@printf "\n"
	@echo $(G)"                       **"
	@echo $(G)"                      /**"
	@echo $(G)"  **********   ******  /**  ** **   ** ****** ******"
	@echo $(G)" //**//**//** //////** /** ** /**  /**//**//*////**"
	@echo $(G)"  /** /** /**  ******* /****  /**  /** /** /    **"
	@echo $(G)"  /** /** /** **////** /**/** /**  /** /**     **"
	@echo $(G)"  *** /** /**//********/**//**//******/***    ******"
	@echo $(G)" ///  //  //  //////// //  //  ////// ///    //////"$(X)
	@printf "\n\n"

$(NAME): $(OBJS)
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
		rm -r $(NAME); \
		echo $(G)Cleaned!$(X); \
	fi

# Cleans all object files and also the library and newly create the library
re: fclean all

# Runs the compiler with the debugger flag
debug: $(OBJ_DEBUG)
	$(CC) $(CFLAGS) -g $^ $(LIB) -o debug
	lldb debug

# Rule for the debug compilation
$(OBJ_DIR_DEBUG)/%.o: %.c
	@mkdir -p _obj_debug
	@$(CC) $(CFLAGS) -g -MMD -MP -c $< $(INC) -o $@

# Tell the Makefile that all those commands are actual commands and not files
.PHONY: all clean fclean debug re






