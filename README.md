<h1 align="center">
    <p>
        📓 Libft
    </p>
</h1>

<p align="center">
    <b><i>Repo for the Libft project at 42 Heilbronn</i></b>
</p>

<p align="center">
    This repository is coded in&nbsp&nbsp
    <a href="https://skillicons.dev">
        <img src="https://skillicons.dev/icons?i=c" />
    </a>
     &nbsp&nbspwith&nbsp&nbsp
    <a href="https://skillicons.dev">
        <img src="https://skillicons.dev/icons?i=neovim" />
    </a>
</p>

<h3 align="center">
    Status
</h3>

<p align="center">
    Finished: 27/3/2023<br>
    Grade: 125%
</p>

---

## 💾 About
> The task of the Libft project is to code a C library with basic functions (see below) I can use in later projects of the core curriculum.

## ≡ Table of Contents
- [Functions](#functions)
    - [Char](#char)
    - [Get next line](#get-next-line)
    - [IO](#io)
    - [List](#list)
    - [Memory](#memory)
    - [Strings](#strings)
- [Installation](https://github.com/kurz-m/Libft/edit/main/README.md#%EF%B8%8F-installation)
- [Usage](#-usage)
- [Contributing](#contributing)
- [License](#license)

## Functions
The library contains the following functions categorized by their use.

### Char
1. [isalnum](./src/char/ft_isalnum.c) - checks for an alphanumeric character
2. [isalpha](./src/char/ft_isalpha.c) - checks for an alphabetic character
3. [isascii](./src/char/ft_isascii.c) - checks if *c* fits into the ASCII character set
4. [isblank](./src/char/ft_isblank.c) - checks if *c* is a white space or a tab
5. [iscntrl](./src/char/ft_iscntrl.c) - checks if *c* is a control character
6. [isdigit](./src/char/ft_isdigit.c) - checks for a digit (0 through 9)
7. [isinstr](./src/char/ft_isinstr.c) - checks if *c* is in the given string
8. [islower](./src/char/ft_islower.c) - checks if *c* is a lowercase character
9. [isprint](./src/char/ft_isprint.c) - checks for any printable character including space
10. [isspace](./src/char/ft_isspace.c) - checks if *c* is a space
11. [isupper](./src/char/ft_isupper.c) - checks if *c* is a uppercase character
12. [isxdigit](./src/char/ft_isdigit.c) - checks for a hexadecimal digit (0 through f/F)
13. [tolower](./src/char/ft_tolower.c) - converts lowercase letters to uppercase
14. [toupper](./src/char/ft_toupper.c) - converts uppercase letters to lowercase

### Get next line
1. [get_next_line](./src/gnl/ft_get_next_line.c) - returns a freeable new line from the specified file descriptor
2. [get_next_line_utils](./src/gnl/ft_get_next_line_utils.c) - utility functions for [get_next_line](./src/gnl/ft_get_next_line.c)

### IO
1. [putchar_fd](./src/io/ft_putchar_fd.c) - outputs a character to the specified file descriptor
2. [putstr_fd](./src/io/ft_putstr_fd.c) - outputs a string to the specified file descriptor
3. [putendl_fd](./src/io/ft_putendl_fd.c) - outputs a string to the specified file descriptor with an added newline
4. [putnbr_fd](./src/io/ft_putnbr_fd.c) - outputs an integer to the specified file descriptor

### Array
1. [arrdup](./src/array/ft_arrdup.c) - copies an array of strings
2. [arrfree](./src/array/ft_arrfree.c) - frees an array of strings
3. [arrlen](./src/array/ft_arrlen.c) - returns the length of an array
4. [arrprint](./src/array/ft_arrprint.c) - prints all strings from an array
5. [resize_array](./src/array/ft_resize_array.c) - resizes an array of strings with a given capacity

### List
1. [lstclear](./src/list/ft_lstclear.c) - deletes and frees the given nodes and every successor
2. [lstadd_back](./src/list/ft_lstadd_back.c) - adds a node at the end of a list
3. [lstadd_front](./src/list/ft_lstadd_front.c) - adds a node at the beginning of a list
4. [lstdelone](./src/list/ft_lstdelone.c) - deletes the content of a node with a given function and frees the node
5. [lstiter](./src/list/ft_lstiter.c) - iterates a list and applies a function to its content
6. [lstlast](./src/list/ft_lstlast.c) - returns the last node of a list
7. [lstmap](./src/list/ft_lstmap.c) - creates a new list from a given list with a function being applied to its content
8. [lstnew](./src/list/ft_lstnew.c) - creates a new node (with malloc(3))
9. [lstsize](./src/list/ft_lstsize.c) - counts the number of nodes in a list

### Memory
1. [bzero](./src/memory/ft_bzero.c) - zeros n bytes of the memory
2. [calloc](./src/memory/ft_calloc.c) - allocates memory and the allocated memory is set to zero
3. [memchr](./src/memory/ft_memchr.c) - scans memory for specified byte
4. [memcmp](./src/memory/ft_memcmp.c) - compares memory areas
5. [memcpy](./src/memory/ft_memcpy.c) - copies memory area
6. [memmove](./src/memory/ft_memmove.c) - copies memory area in a non-destructive manner
7. [memset](./src/memory/ft_memset.c) - fills memory with a constant byte

### Strings
1. [atoi](./src/string/ft_atoi.c) - converts a string to an integer
2. [atol](./src/string/ft_atol.c) - converts a string to a long
3. [count_words](./src/string/ft_count_words.c) - counts the words in a string divided by 'c'
4. [itoa](./src/string/ft_itoa.c) - converts an integer to a string
5. [split](./src/string/ft_split.c) - splits a string at a specified delimiter into a new array of strings
6. [stpcpy](./src/string/ft_stpcpy.c) - copies a string an returns a pointer to the '\0'-terminating char
7. [stpncpy](./src/string/ft_stpncpy.c) - copies n chars of a string an returns a pointer to the '\0'-terminating char
8. [strchr](./src/string/ft_strchr.c) - locates first occurrence of a character in a string
9. [strcmp](./src/string/ft_strcmp.c) - compares two strings
10. [strcpy](./src/string/ft_strcpy.c) - copies a string an returns a pointer to the string
11. [strdup](./src/string/ft_strdup.c) - duplicates a string into a new string (memory allocated with malloc(3))
12. [striteri](./src/string/ft_striteri.c) - applies a function to every character in a string
13. [strjoin](./src/string/ft_strjoin.c) - concatenates two strings into a new string (memory allocated with malloc(3))
14. [strjoinfree](./src/string/ft_strjoinfree.c) - concatenates two strings into a new string (memory allocated with malloc(3)) and free the string specified by the third argument
15. [strlcat](./src/string/ft_strlcat.c) - size-bounded string concatenation ('\0'-terminated)
16. [strlcpy](./src/string/ft_strlcpy.c) - size-bounded string copying ('\0'-terminated)
17. [strlen](./src/string/ft_strlen.c) - calculates the length of a string
18. [strlen_c](./src/string/ft_strlen_c.c) - calculates the length of a string till the specified char
19. [strmapi](./src/string/ft_strmapi.c) - creates new string from another string with a function being applied to every character
20. [strnchr](./src/string/ft_strnchr.c) - locates first occurrence of a character in a string within 'n' bytes
21. [strncmp](./src/string/ft_strncmp.c) - compares specified amount of bytes of two strings
22. [strndup](./src/string/ft_strndup.c) - duplicates 'n' chars from a string into a new string (memory allocated with malloc(3))
23. [strnlen](./src/string/ft_strnlen.c) - calculates the length of a string with max size 'n'
24. [strnstr](./src/string/ft_strnstr.c) - locates a substring in a string within a specified amount of bytes
25. [strrchr](./src/string/ft_strrchr.c) - locates last occurrence of a character in a string 
26. [strstr](./src/string/ft_strstr.c) - locates a substring in a string
27. [strtrim](./src/string/ft_strtrim.c) - trims start and end of a string with a specified set of characters
28. [substr](./src/string/ft_substr.c) - creates a substring from a string from a specified start and length

## 🗣️ Installation
To install the library, follow these steps:
1. Clone the repository: 
```shell
git clone https://github.com/kurz-m/Libft.git
```

2. Navigate to the repository: 
```shell
cd Libft
```

3. Compile the library:
```shell
make
```

All in one solution:
```shell
git clone https://github.com/kurz-m/Libft.git && cd Libft && make
```

## 🧰 Usage
### Instructions
1. Include the header file
```C
#include "libft.h"
```

2. Link against the compiled library

```shell
% cc [your-program.c] -L[path/to/library] -lft
```
## Contributing
Contributions are welcome! Please open an issue or submit a pull request if you would like to contribute.

## License
[MIT](https://choosealicense.com/licenses/mit/)
