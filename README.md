<h1 align="center">
    <p>
        📓 Libft
    </p>
</h1>
<h1 align="center">
    <p>
        <b><i>Repo for the Libft project at 42 Heilbronn</i></b>
    </p>
</h1>
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
1. [bzero](./src/ft_bzero.c) - 
2. [memchr](./src/ft_memchr.c) - 
3. [memcmp](./src/ft_memcpy.c) - 
4. [memmove](./src/ft_memmove.c) - 
5. [memset](./src/ft_memset.c) - 
6. [split](./src/ft_split.c) - 
7.
8.
9.
10.
11.
12.
13.
14.
15.
16.
17.
18.
19.

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
1. Clone the repository: `git clone https://github.com/kurz-m/Libft.git`
2. Navigate to the repository: `cd Libft/src`
3. Compile the library: `make all`

## 🧰 Usage
To use the library in your project, include the header file `libft.h` and link against the compiled library.

## Contributing
Contributions are welcome! Please open an issue or submit a pull request if you would like to contribute.

## License
[MIT](https://choosealicense.com/licenses/mit/)
