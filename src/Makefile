# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 09:39:14 by makurz            #+#    #+#              #
#    Updated: 2023/03/17 16:42:43 by makurz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CC := cc
CFLAGS := -Wall -Wextra -Werror

SRCS :=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c	\
		ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_memcpy.c ft_putstr_fd.c	\
		ft_memchr.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c	ft_memcmp.c	\
		ft_strdup.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_bzero.c		\
		ft_calloc.c ft_strjoin.c

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS) $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all