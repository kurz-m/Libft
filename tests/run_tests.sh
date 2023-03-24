# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_tests.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makurz <makurz@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 16:27:21 by makurz            #+#    #+#              #
#    Updated: 2023/03/24 09:26:27 by makurz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# make && make clean && cc -o main_test.out main.c -L.. -lft -L. -lft_test && ./main_test.out
# Check if all files of a given list are within the current directory
# Usage: ./check_files.sh

# List of files to check
file_list=(
	"file1.txt"
	"file2.txt"
	"file3.txt"
)

# Loop through each file in the list
for file_name in "${file_list[@]}"; do
	# Check if file exists in the current directory
	if [ -f "$file_name" ]; then
		echo -e "\e[32m$file_name okej\e[0m"
	else
		echo -e "\e[31m$file_name missing\e[0m"
	fi
done