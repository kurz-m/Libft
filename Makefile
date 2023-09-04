NAME := libft.a
.DEFAULT_GOAL := all

##############################################################################
##############################################################################
##############################################################################
Y := \033[33m
C := \033[36m
R := \033[31m
G := \033[32m
X := \033[0m
BO := $(shell tput bold)
LOG := printf "[$(BO)$(G)ⓘ INFO$(X)] %s\n"

##############################################################################
##############################################################################
##############################################################################

CC := cc

CFLAGS ?= -Wall -Werror -Wextra
LDFLAGS ?=
ARFLAGS := -rcs
INC := -I ./include
RM := rm -f

##############################################################################
##############################################################################
##############################################################################

VPATH =	src/array src/char src/gnl src/io src/list src/memory		\
		src/string src/printf

SRC_ARR :=	ft_arrdup.c ft_arrfree.c ft_arrlen.c ft_arrprint.c

SRC_CHAR :=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c		\
			ft_iscntrl.c ft_isdigit.c ft_isinstr.c ft_isinstr.c		\
			ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c		\
			ft_isxdigit.c ft_tolower.c ft_toupper.c

SRC_GNL :=	ft_get_next_line.c ft_get_next_line_utils.c

SRC_IO :=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

SRC_LIST :=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c		\
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c	\
			ft_lstnew.c ft_lstsize.c

SRC_MEM :=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c			\
			ft_memcpy.c ft_memmove.c ft_memset.c

SRC_PRINT := ft_printf.c ft_printf_utils_nbr.c ft_printf_utils_str.c

SRC_STR :=	ft_atoi.c ft_atol.c ft_count_words.c ft_itoa.c			\
			ft_split.c ft_stpcpy.c ft_strchr.c ft_strcmp.c			\
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c 	\
			ft_strlcpy.c ft_strlen.c ft_strlen_c.c ft_strmapi.c		\
			ft_strncmp.c ft_strndup.c ft_strnlen.c ft_strnstr.c		\
			ft_strrchr.c ft_strstr.c ft_strtrim.c ft_substr.c

SRCS :=		$(SRC_ARR) $(SRC_CHAR) $(SRC_GNL) $(SRC_IO) $(SRC_LIST)	\
			$(SRC_MEM) $(SRC_PRINT) $(SRC_STR)

##############################################################################
##############################################################################
##############################################################################

OBJ_DIR := ./_obj
OBJ_DIR_DEBUG := ./_obj_debug
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:ft_%.c=%.o))
OBJS_DEBUG := $(addprefix $(OBJ_DIR_DEBUG)/, $(SRCS:ft_%.c=%.o))

##############################################################################
##############################################################################
##############################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(LOG) "Linking objects to $(notdir $(NAME))"
	@ar $(ARFLAGS) $(NAME) $(OBJS)

##############################################################################
##############################################################################
##############################################################################

$(OBJ_DIR)/%.o: ft_%.c
	@$(LOG) "Compiling $(notdir $@)"
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -MMD -MP -c $< $(INC) -o $@

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
		$(LOG) "Cleaning $(notdir $(OBJ_DIR))"; \
		rm -rf $(OBJ_DIR); \
	else \
		$(LOG) "No objects to clean."; \
	fi

fclean: clean
	@if [ -f "$(NAME)" ]; then \
		$(LOG) "Cleaning $(notdir $(NAME))"; \
		rm -f $(NAME); \
	else \
		$(LOG) "No library to clean."; \
	fi

re: fclean all

##############################################################################
##############################################################################
##############################################################################

.PHONY: all clean fclean debug re

-include $(OBJ:%.o=%.d)
