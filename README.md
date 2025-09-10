# 📚 Libft

Custom implementation of a C standard library. Provides commonly used functions for string handling, memory operations, and linked list management, forming a reusable foundation for future projects.

## Build and run

```bash
# Clone
 git clone https://github.com/cmunoz-g/libft.git
 cd libft

# Build static library
 make
```

This produces `libft.a`.

Include it in your project:

```c
#include "libft.h"
```

Compile with:

```bash
gcc main.c -L. -lft -o my_program
```

## Features

* **Standard libc reimplementations** — e.g. `ft_strlen`, `ft_strcpy`, `ft_strdup`.
* **Additional helpers** — e.g. `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`.
* **Linked list utilities** — e.g. `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`.
* **Memory operations** — allocation, initialization, and manipulation functions.

## Project structure

* **src/** — all C function implementations.
* **libft.h** — library header.
* **Makefile** — build targets for library and cleanup.
