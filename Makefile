NAME := libft.a
.DEFAULT_GOAL := all
CC := cc
RM := rm -f

################################################################################
###############                 PRINT OPTIONS                     ##############
################################################################################

Y := \033[33m
C := \033[36m
R := \033[31m
G := \033[32m
X := \033[0m
BO := $(shell tput bold)
LOG := printf "[$(BO)$(G)ⓘ INFO$(X)] %s\n"

################################################################################
###############                  DIRECTORIES                      ##############
################################################################################

OBJ_DIR := ./obj-cache
INC_DIRS := array ctype gnl io list printf string
SRC_DIRS := array ctype gnl io list printf string

vpath %.h $(INC_DIRS)
vpath %.c $(SRC_DIRS)

################################################################################
###############                  SOURCE FILES                     ##############
################################################################################

SRC_ARR := ft_arrdup.c
SRC_ARR += ft_arrfree.c
SRC_ARR += ft_arrlen.c
SRC_ARR += ft_arrprint.c
SRC_ARR += ft_resize_array.c

SRC_CTYPE := ft_ctype.c

SRC_GNL := ft_get_next_line.c
SRC_GNL += ft_get_next_line_utils.c

SRC_IO := ft_putchar_fd.c
SRC_IO += ft_putendl_fd.c
SRC_IO += ft_putnbr_fd.c
SRC_IO += ft_putstr_fd.c

SRC_LIST := ft_lstadd_back.c
SRC_LIST += ft_lstadd_front.c
SRC_LIST += ft_lstclear.c
SRC_LIST += ft_lstdelone.c
SRC_LIST += ft_lstiter.c
SRC_LIST += ft_lstlast.c
SRC_LIST += ft_lstmap.c
SRC_LIST += ft_lstnew.c
SRC_LIST += ft_lstsize.c


SRC_PRINT := ft_printf.c
SRC_PRINT += ft_printf_utils_nbr.c
SRC_PRINT += ft_printf_utils_str.c

SRC_STR := ft_bzero.c
SRC_STR += ft_calloc.c
SRC_STR += ft_memchr.c
SRC_STR += ft_memcmp.c
SRC_STR += ft_memcpy.c
SRC_STR += ft_memmove.c
SRC_STR += ft_memset.c
SRC_STR += ft_atoi.c
SRC_STR += ft_atol.c
SRC_STR += ft_count_words.c
SRC_STR += ft_itoa.c
SRC_STR += ft_split.c
SRC_STR += ft_stpcpy.c
SRC_STR += ft_stpncpy.c
SRC_STR += ft_strchr.c
SRC_STR += ft_strcmp.c
SRC_STR += ft_strcpy.c
SRC_STR += ft_strdup.c
SRC_STR += ft_striteri.c
SRC_STR += ft_strjoin.c
SRC_STR += ft_strjoinfree.c
SRC_STR += ft_strlcat.c
SRC_STR += ft_strlcpy.c
SRC_STR += ft_strlen.c
SRC_STR += ft_strlen_c.c
SRC_STR += ft_strmapi.c
SRC_STR += ft_strnchr.c
SRC_STR += ft_strncmp.c
SRC_STR += ft_strndup.c
SRC_STR += ft_strnlen.c
SRC_STR += ft_strnstr.c
SRC_STR += ft_strrchr.c
SRC_STR += ft_strreplace.c
SRC_STR += ft_strstr.c
SRC_STR += ft_strtrim.c
SRC_STR += ft_substr.c

SRCS := $(SRC_ARR)
SRCS += $(SRC_CTYPE)
SRCS += $(SRC_GNL)
SRCS += $(SRC_IO)
SRCS += $(SRC_LIST)
SRCS += $(SRC_PRINT)
SRCS += $(SRC_STR)

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:ft_%.c=%.o))

################################################################################
########                           FLAGS                        ################
################################################################################

CFLAGS ?= -Wall -Werror -Wextra -MMD -MP $(addprefix -I, $(INC_DIRS))
ARFLAGS := -rcs

ifeq ($(DEBUG), 1)
	CFLAGS += -g
endif

################################################################################
########                       COMPILING                        ################
################################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(LOG) "Linking objects to $(notdir $(NAME))"
	@ar $(ARFLAGS) $(NAME) $(OBJS)

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

.PHONY: all clean fclean debug re

-include $(OBJ:%.o=%.d)
