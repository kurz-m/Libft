#!/bin/bash

# make && make clean && cc -o main_test.out main.c -L.. -lft -L. -lft_test && ./main_test.out

CC="cc"
CFLAGS="-Wall -Werror -Wextra -g"
LFLAGS="-L../src/ -lft"

# Check for the library file
if [ ! -f "libft.a" ]; then
	(make)
fi

# List of mandatory tests
if [[ $# -eq 0 || $1 == "all" ]]; then
	while IFS= read -r -d '' file; do
		MANDATORY_TESTS+=("$file")
	done < <(find . -maxdepth 1 -name 'test_*.c' -print0)
	for i in "${!MANDATORY_TESTS[@]}"; do
		MANDATORY_OBJECTS[$i]=$(echo "${MANDATORY_TESTS[$i]}" | sed 's/\.c$/.o/')
	done
fi
# List of bonus tests
if [[ $1 == "all" || $1 == "bonus" ]]; then
	while IFS= read -r -d '' file; do
		BONUS_TESTS+=("$file")
	done < <(find . -maxdepth 1 -name 'test_*.c' -print0)
	for i in "${!BONUS_TESTS[@]}"; do
		BONUS_OBJECTS[$i]=$(echo "${BONUS_TESTS[$i]}" | sed 's/\.c$/.o/')
	done
fi

# Loop through each file in the list
if [[ $# -eq 0 || $1 == "all" ]]; then
	for n in "${!MANDATORY_TESTS[@]}"; do
		# Check if file exists in the parent directory
		# echo "${CC} ${CFLAGS} ${MANDATORY_TESTS[$n]} -o ${MANDATORY_OBJECTS[$n]} ${LFLAGS}"
		${CC} ${CFLAGS} ${MANDATORY_TESTS[$n]} -o ${MANDATORY_OBJECTS[$n]} ${LFLAGS}
	done
	for MANDATORY in "${MANDATORY_OBJECTS[@]}"; do
		chmod +x ${MANDATORY}
		${MANDATORY}
	done
fi

if [[ $1 == "all" || $1 == "bonus" ]]; then
	# Check if bonus files exists in parent directory
	for n in "${!BONUS_TESTS[@]}"; do
		${CC} ${CFLAGS} ${BONUS_TESTS[$n]} -o ${BONUS_OBJECTS[$n]} ${LFLAGS}
	done
fi

if [[ $# -eq 1 || $1 != "bonus" ]]; then
		${CC} ${CFLAGS} test_${1}.c -o test_${1}.o ${LFLAGS}
		chmod +x test_${1}.o
		./test_${1}.o
fi

rm -f test_*.o
(cd ../src && make clean)
