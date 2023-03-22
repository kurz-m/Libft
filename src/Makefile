# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 09:39:14 by makurz            #+#    #+#              #
#    Updated: 2023/03/22 14:55:00 by makurz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c	\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c			\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c		\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c		\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c			\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c		\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:%.c=%.o)

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c

BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)



all: $(NAME)

$(NAME): $(SRCS) $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

bonus: all $(BONUS_SRCS) $(BONUS_OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	
re: fclean all

.PHONY: all clean fclean bonus re
