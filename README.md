
# Libft - Custom Standard C Library

**libft** is a library written in C that implements a set of useful functions often missing from the standard libraries. It is designed to be used in various projects that require string manipulation, memory management, and linked list functions.

## Table of Contents
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Available Functions](#available-functions)
  - [Mandatory Part](#mandatory-part)
  - [Bonus](#bonus)
- [License](#license)

---

## Features

- String manipulation
- Memory management
- Type conversion
- Utility functions for linked lists

---

## Installation

To compile the library:
```bash
git clone https://github.com/ThatsLucas/libft.git
cd libft
make

make bonus
```

This will generate a `libft.a` file that you can include in your projects.

---

## Usage

Include the library in your `.c` files by adding its header:
```c
#include "libft.h"
```

When compiling, link the static library:
```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

---

## Available Functions

### Mandatory Part

| Function         | Description                                            |
|------------------|--------------------------------------------------------|
| `ft_isalpha`     | Checks if a character is alphabetic.                   |
| `ft_isdigit`     | Checks if a character is a digit.                      |
| `ft_isalnum`     | Checks if a character is alphanumeric.                 |
| `ft_isascii`     | Checks if a character is ASCII.                        |
| `ft_isprint`     | Checks if a character is printable.                    |
| `ft_strlen`      | Calculates the length of a string.                     |
| `ft_bzero`       | Sets a memory area to zero.                            |
| `ft_memset`      | Fills a memory area with a specified value.            |
| `ft_memcpy`      | Copies a memory area.                                  |
| `ft_memmove`     | Copies a memory area, handling overlaps.               |
| `ft_strchr`      | Finds the first occurrence of a character in a string. |
| `ft_strrchr`     | Finds the last occurrence of a character in a string.  |
| `ft_strncmp`     | Compares two strings up to a specified number of characters. |
| `ft_strnstr`     | Finds a substring within a string.                     |
| `ft_atoi`        | Converts a string to an integer.                       |
| `ft_strdup`      | Duplicates a string.                                   |
| `ft_calloc`      | Allocates memory and initializes it to zero.           |
| `ft_itoa`        | Converts an integer to a string.                       |
| `ft_substr`      | Extracts a substring from a given string.              |
| `ft_split`       | Splits a string based on a delimiter.                  |
| `ft_strjoin`     | Concatenates two strings.                              |
| `ft_strtrim`     | Removes unnecessary characters from the beginning and end of a string. |
| `ft_strmapi`     | Applies a function to each character of a string.      |
| `ft_striteri`    | Applies a function to each character with its index.   |
| `ft_putchar_fd`  | Writes a character to a file descriptor.               |
| `ft_putstr_fd`   | Writes a string to a file descriptor.                  |
| `ft_putendl_fd`  | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd`   | Writes an integer to a file descriptor.                |

### Bonus

| Function          | Description                                           |
|-------------------|-------------------------------------------------------|
| `ft_lstnew`       | Creates a new linked list element.                    |
| `ft_lstadd_front` | Adds a new element to the front of the list.          |
| `ft_lstsize`      | Returns the size of the linked list.                  |
| `ft_lstlast`      | Returns the last element of the linked list.          |
| `ft_lstadd_back`  | Adds a new element to the back of the list.           |
| `ft_lstdelone`    | Deletes a specific element from the list.             |
| `ft_lstclear`     | Clears all elements from the list.                    |
| `ft_lstiter`      | Applies a function to each element of the list.       |
| `ft_lstmap`       | Creates a new list by applying a function to each element of the old list. |

---

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute it.

---

## Credits

This project was created as part of my training, following the standards of the **Libft** project at 42.
