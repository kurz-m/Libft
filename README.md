<h1 align="center">
    <p>
        📓 Libft
    </p>
</h1>

<p align="center">
    <b><i>Repo for the Libft project at 42 Heilbronn</i></b>
</p>

<p align="center">
    This repository is coded with: 
    <a href="https://skillicons.dev">
        <img src="https://skillicons.dev/icons?i=git,kubernetes,docker,c,vim" />
    </a>
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
1. [bzero](./src/ft_bzero.c) - zeros **n** bytes of the memory
2. [memchr](./src/ft_memchr.c) - scans memory for specified byte
3. [memcmp](./src/ft_memcmp.c) - compares memory areas
4. [memcpy](./src/ft_memcpy.c) - copies memory area
5. [memmove](./src/ft_memmove.c) - copies memory area in a non-destructive manner
6. [memset](./src/ft_memset.c) - fills memory with a constant byte
7. [split](./src/ft_split.c) - splits a string at a specified delimiter into a new array of strings
8. [strchr](./src/ft_strchr.c)
9. [strdup](./src/ft_strdup.c)
10. [striteri](./src/ft_striteri.c)
11. [strjoin](./src/ft_strjoin.c)
12. [strlcat](./src/ft_strlcat.c) 
13. [strlen](./src/ft_strlen.c)
14. [strmapi](./src/ft_strmapi.c)
15. [strncmp](./src/ft_strncmp.c)
16. [strnstr](./src/ft_strnstr.c)
17. [strrchr](./src/ft_strrchr.c)
18. [strtrim](./src/ft_strtrim.c)
19. [substr](./src/ft_substr.c)

### linked list
1.
2.
3.
4.
5.
6.
7.
8.
9.

### output
1.
2.
3.
4.

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
To use the library in your project, include the header file and link against the compiled library.
```C
#include "libft.h"
```
```shell
% cc [your-program.c] -L[path/to/library] -lft
```
## Contributing
Contributions are welcome! Please open an issue or submit a pull request if you would like to contribute.

## License
[MIT](https://choosealicense.com/licenses/mit/)
