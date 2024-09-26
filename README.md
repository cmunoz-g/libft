# 📚 Libft

## Introduction
**Libft** is a custom implementation of a standard C library, providing a collection of commonly used functions that are not available by default. This project serves as a foundation for many other projects, offering essential utilities like string manipulation, memory management, linked list operations, and more.

## Project Overview
The goal of this project is to create a personal library of functions that replicate or extend the functionality of the standard C library. These functions will be used throughout the 42 curriculum and will be essential tools in future C projects.

### Mandatory Part
1. **Libc Functions**: Re-implement common C standard library functions such as `ft_strlen`, `ft_strcpy`, `ft_strdup`, and others.
2. **Additional Functions**: Implement additional utility functions like `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, etc., which are not part of the standard library but are useful in many programming contexts.

### Bonus Part
1. **Linked List Functions**: Create and manipulate linked lists using functions such as `ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, etc.
2. **Memory Functions**: Additional memory manipulation functions.

## Installation and Usage
1. **Clone the Repository**:
    ```bash
    git clone https://github.com/cmunoz-g/libft.git
    ```
2. **Navigate to the Project Directory**:
    ```bash
    cd libft
    ```
3. **Compile the Library**:
    ```bash
    make
    ```
4. **Include in Your Project**:
    Include the `libft.h` header file in your project and link the `libft.a` library during compilation:
    ```c
    #include "libft.h"
    ```
    ```bash
    gcc main.c -L. -lft -o my_program
    ```
