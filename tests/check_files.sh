# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    check_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 09:26:39 by makurz            #+#    #+#              #
#    Updated: 2023/03/24 10:39:42y makurz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Check which files are present in the directory with the libft.h header file

SRC_PATH=$(dirname $(find .. -name "libft.h"))

# List of files to check
mandatory_files=(
	"ft_isalpha.c"
	"ft_isdigit.c"
	"ft_isalnum.c"
	"ft_isascii.c"
	"ft_isprint.c"
	"ft_strlen.c"
	"ft_memset.c"
	"ft_bzero.c"
	"ft_memcpy.c"
	"ft_memmove.c"
	"ft_strlcpy.c"
	"ft_strlcat.c"
	"ft_toupper.c"
	"ft_tolower.c"
	"ft_strchr.c"
	"ft_strrchr.c"
	"ft_strncmp.c"
	"ft_memchr.c"
	"ft_memcmp.c"
	"ft_strnstr.c"
	"ft_atoi.c"
	"ft_calloc.c"
	"ft_strdup.c"
	"ft_substr.c"
	"ft_strjoin.c"
	"ft_strtrim.c"
	"ft_split.c"
	"ft_itoa.c"
	"ft_strmapi.c"
	"ft_striteri.c"
	"ft_putchar_fd.c"
	"ft_putstr_fd.c"
	"ft_putendl_fd.c"
	"ft_putnbr_fd.c"
)

if [[ $# -eq 0 || $1 == "all" ]]; then
	for file_name in "${mandatory_files[@]}"; do
		if [ -f "${SRC_PATH}/$file_name" ]; then
			echo "\033[32m\xE2\x9C\x93\033[0m $file_name"
		else
			echo "\033[31mx\033[0m $file_name missing"
		fi
	done
fi

bonus_files=(
	"ft_lstnew.c"
	"ft_lstadd_front.c"
	"ft_lstsize.c"
	"ft_lstlast.c"
	"ft_lstadd_back.c"
	"ft_lstdelone.c"
	"ft_lstclear.c"
	"ft_lstiter.c"
	"ft_lstmap.c"
)

if [[ $1 == "all" || $1 == "bonus" ]]; then
	for bonus_file in "${bonus_files[@]}"; do
		if [ -f "${SRC_PATH}/$bonus_file" ]; then
			echo "\033[32m\xE2\x9C\x93\033[0m $bonus_file"
		else
			echo "\033[31mx\033[0m $bonus_file missing"
		fi
	done
fi
