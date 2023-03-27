# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 09:39:14 by makurz            #+#    #+#              #
#    Updated: 2023/03/27 10:58:32 by makurz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the name of the library
NAME := libft.a

# Define the compiler the Makefile should use
CC := cc

# Add the neccessary flags for compiling 
CFLAGS := -Wall -Wextra -Werror
ARFLAGS := -rcs

# Add the remove command
RM := rm -f

# Explicitly state all function names for the mandatory part
SRCS :=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c	\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c			\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c		\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c		\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c			\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c		\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Substitute the suffix .c with .o for the object files
OBJS := $(SRCS:%.c=%.o)

# Explicitly state all function names for the bonus part
BONUS_SRCS :=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c		\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c	\
				ft_lstmap.c

BONUS_OBJS := $(BONUS_SRCS:%.c=%.o)

# Main rule to compile the mandatory part
$(NAME): $(OBJS)
	@ar $(ARFLAGS) $@ $^

# Create a static rule for compiling from source to object file
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

# Only clean the object files
clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

# Additionally removes the library
fclean: clean
	@$(RM) $(NAME)

# Extra rule for compiling only the bonus part
bonus: $(BONUS_OBJS)
	@ar $(ARFLAGS) $(NAME) $(BONUS_OBJS)

# Cleans all object files and also the library and newly create the library
re: fclean all

# Creates the library from the mandatory and bonus part
all: $(NAME) bonus

# Tell the Makefile that all those commands are actual commands and not files
.PHONY: all clean fclean bonus re
