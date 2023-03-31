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
     &nbsp&nbspand&nbsp&nbsp
    <a href="https://skillicons.dev">
        <img src="https://skillicons.dev/icons?i=vscode" />
    </a>
</p>

<h3 align="center">
    Status
</h3>

<p align="center">
    Finished: 27/3/2023
    Grade: 125%
</p>

---

## 💾 About
> The task of the Libft project is to code a C library with basic functions (see below) I can use in later projects of the core curriculum.

## Table of Contents
- [Functions](#functions)
    - [ctype](#ctype)
    - [stdlib](#stdlib)
    - [strings](#strings)
    - [linked list](#linked-list)
    - [output](#output)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Functions
The library contains the following functions categorized by their use.

### ctype
These functions check whether *c*, which must have the value of an
**unsigned char** or **EOF**, falls into a certain character class.
1. [isalnum](./src/ft_isalnum.c) - checks for an alphanumeric character
2. [isalpha](./src/ft_isalpha.c) - checks for an alphabetic character
3. [isascii](./src/ft_isascii.c) - checks if *c* fits into the ASCII character set
4. [isdigit](./src/ft_isdigit.c) - checks for a digit (0 through 0)
5. [isprint](./src/ft_isprint.c) - checks for any printable character including space
6. [tolower](./src/ft_tolower.c) - converts lowercase letters to uppercase
7. [toupper](./src/ft_toupper.c) - converts uppercase letters to lowercase

### stdlib
1. [atoi](./src/ft_atoi.c) - convert a string to an integer
2. [calloc](./src/ft_calloc.c) - allocates memory and the allocated memory is set to zero
3. [itoa](./src/ft_itoa.c) - convert an integer to a string

### strings
1. [bzero](./src/ft_bzero.c) - zeros n bytes of the memory
2. [memchr](./src/ft_memchr.c) - scans memory for specified byte
3. [memcmp](./src/ft_memcmp.c) - compares memory areas
4. [memcpy](./src/ft_memcpy.c) - copies memory area
5. [memmove](./src/ft_memmove.c) - copies memory area in a non-destructive manner
6. [memset](./src/ft_memset.c) - fills memory with a constant byte
7. [split](./src/ft_split.c) - splits a string at a specified delimiter into a new array of strings
8. [strchr](./src/ft_strchr.c) - locates first occurrence of a character in a string
9. [strdup](./src/ft_strdup.c) - duplicates a string into a new string (memory allocated with malloc(3))
10. [striteri](./src/ft_striteri.c) - applies a function to every character in a string
11. [strjoin](./src/ft_strjoin.c) - concatenates two strings into a new string (memory allocated with malloc(3))
12. [strlcat](./src/ft_strlcat.c) - size-bounded string concatenation ('\0'-terminated)
13. [strlen](./src/ft_strlen.c) - calculates the length of a string
14. [strmapi](./src/ft_strmapi.c) - creates new string from another string with a function being applied to every character
15. [strncmp](./src/ft_strncmp.c) - compares specified amount of bytes of two strings
16. [strnstr](./src/ft_strnstr.c) - locates a substring in a string within a specified amount of bytes
17. [strrchr](./src/ft_strrchr.c) - locates last occurrence of a character in a string 
18. [strtrim](./src/ft_strtrim.c) - trims start and end of a string with a specified set of characters
19. [substr](./src/ft_substr.c) - creates a substring from a string from a specified start and length

### linked list
1. [lstclear](./src/ft_lstclear.c) - deletes and frees the given nodes and every successor
2. [lstadd_back](./src/ft_lstadd_back.c) - adds a node at the end of a list
3. [lstadd_front](./src/ft_lstadd_front.c) - adds a node at the beginning of a list
4. [lstdelone](./src/ft_lstdelone.c) - deletes the content of a node with a given function and frees the node
5. [lstiter](./src/ft_lstiter.c) - iterates a list and applies a function to its content
6. [lstlast](./src/ft_lstlast.c) - returns the last node of a list
7. [lstmap](./src/ft_lstmap.c) - creates a new list from a given list with a function being applied to its content
8. [lstnew](./src/ft_lstnew.c) - creates a new node (with malloc(3))
9. [lstsize](./src/ft_lstsize.c) - counts the number of nodes in a list

### output
1. [putchar_fd](./src/ft_putchar_fd.c) - outputs a character to the specified file descriptor
2. [putstr_fd](./src/ft_putstr_fd.c) - outputs a string to the specified file descriptor
3. [putendl_fd](./src/ft_putendl_fd.c) - outputs a string to the specified file descriptor with an added newline
4. [putnbr_fd](./src/ft_putnbr_fd.c) - outputs an integer to the specified file descriptor

## Installation
To install the library, follow these steps:
1. Clone the repository: 
```shell
% git clone https://github.com/kurz-m/Libft.git
```

2. Navigate to the repository: 
```shell
% cd Libft/src
```

3. Compile the library:
```shell
% make all
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
