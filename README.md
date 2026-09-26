_This project has been created as part of the 42 curriculum by besaipid_

#Libft

Libft is a foundational C library developed as part of the 42 curriculum.

The goal of this project is to recreate a collection of commonly used functions from the C standard library while building additional utility functions that will be useful throughout future 42 projects.

By implementing these functions from scratch, the project develops a deeper understanding of:

C programming fundamentals

Memory management

Pointers and pointer arithmetic

Strings and character manipulation

Arrays and linked lists

Dynamic memory allocation

Function prototypes and headers

Compilation and static libraries

Defensive programming and edge cases

The final result is a static library called libft.a containing the implemented functions.

**Library Contents**

The library is divided into several groups of functions.

Character Functions

These functions test or manipulate individual characters:

ft_isalpha — checks whether a character is alphabetic.

ft_isdigit — checks whether a character is a decimal digit.

ft_isalnum — checks whether a character is alphanumeric.

ft_isascii — checks whether a character belongs to the ASCII character set.

ft_isprint — checks whether a character is printable.

ft_toupper — converts a lowercase character to uppercase.

ft_tolower — converts an uppercase character to lowercase.

String Functions

These functions provide common operations for working with C strings:

ft_strlen — calculates the length of a string.

ft_strchr — searches for the first occurrence of a character.

ft_strrchr — searches for the last occurrence of a character.

ft_strncmp — compares two strings up to a specified number of characters.

ft_strlcpy — copies a string into a destination buffer with size control.

ft_strlcat — appends a string to another string with size control.

ft_strnstr — searches for a substring within another string.

ft_strdup — creates a dynamically allocated duplicate of a string.

Memory Functions

These functions work directly with memory:

ft_memset — fills a memory area with a specified byte.

ft_bzero — sets a memory area to zero.

ft_memcpy — copies data between non-overlapping memory areas.

ft_memmove — copies data between memory areas while handling overlap.

ft_memchr — searches memory for a specified byte.

ft_memcmp — compares two memory areas.

ft_calloc — allocates and initializes memory to zero.

Conversion Functions

ft_atoi — converts a string representation of an integer into an int.

File Descriptor Functions

These functions write strings or characters to file descriptors:

ft_putchar_fd — writes a character to a file descriptor.

ft_putstr_fd — writes a string to a file descriptor.

ft_putendl_fd — writes a string followed by a newline.

ft_putnbr_fd — writes an integer to a file descriptor.

Additional String Functions

The project also includes functions for creating and manipulating strings:

ft_substr — creates a substring from a string.

ft_strjoin — concatenates two strings into a newly allocated string.

ft_strtrim — removes specified characters from the beginning and end of a string.

ft_split — splits a string into an array of strings using a delimiter.

ft_itoa — converts an integer into a newly allocated string.

ft_strmapi — applies a function to each character of a string and creates a new string.

ft_striteri — applies a function to each character of a string while allowing modification.

Linked List Functions

The linked list functions include:

ft_lstnew — creates a new list node.

ft_lstadd_front — adds a node to the beginning of a list.

ft_lstsize — counts the number of nodes in a list.

ft_lstlast — returns the last node of a list.

ft_lstadd_back — adds a node to the end of a list.

ft_lstdelone — deletes one node.

ft_lstclear — deletes an entire list.

ft_lstiter — applies a function to every node.

ft_lstmap — creates a new list by applying a function to every node.

##Instructions
**Compilation**

The project uses a Makefile to compile the source files and create the static library.

Clone the repository and enter the project directory:

git clone <repo-url>
cd libft


Compile the mandatory part:

`make`


This creates:

libft.a


To remove the object files:

`make clean`


To remove the object files and the library:

`make fclean`


To rebuild the project from scratch:

`make re`


**Using the Library**

To use libft in another C project, include the header:

#include "libft.h"


Then compile your program together with the library:
`
cc main.c -I. -L. -lft -o program
`

Here:

-I. tells the compiler where to find libft.h.

-L. tells the linker where to find libft.a.

-lft links the libft library.

-o program specifies the output executable.

For example:

#include "libft.h"
#include <stdio.h>

`
int main(void)
{
    char *str;

    str = ft_strdup("Hello, Libft!");

    if (str == NULL)
        return (1);

    printf("%s\n", str);
    free(str);
    return (0);
}
`


Compile it with:

cc main.c -I. -L. -lft -o run


Then run:
`
./run
`
Technical Choices

The project is written in C and follows the coding standards and restrictions defined by the 42 curriculum.

The library is built as a static library using ar.

The project uses:

A public header file (libft.h)

Individual .c source files for the library functions

A Makefile for compilation and library management

Dynamic memory allocation where required

Standard C library behavior as a reference for compatible functions

Particular attention is required for memory allocation and error handling. Functions that allocate memory must correctly handle allocation failures and avoid memory leaks.

The implementation also needs to consider edge cases such as empty strings, zero-length operations, NULL pointers where applicable, integer limits, and overlapping memory regions.

#Resources
Documentation and References

C standard library documentation — reference for the behavior of standard C functions.

man pages — local Unix documentation for functions such as strlen, memcpy, memmove, calloc, atoi, and related functions.

C programming documentation and tutorials — used to understand pointers, memory management, strings, and linked lists.

42 Libft subject PDF — project requirements, function specifications, and constraints.

Compiler documentation — useful for understanding compilation, warnings, object files, and static libraries.

Useful commands for consulting system documentation include:

man strlen
man memcpy
man memmove
man calloc
man atoi
man isdigit

AI Usage

AI tools were used as a supplementary learning and development resource during the project.

They were used primarily for:

Clarifying C language concepts such as pointers, const, restrict, and memory manipulation.

Understanding the expected behavior of standard library functions.

Explaining compiler and linker concepts.

Helping identify potential edge cases and implementation mistakes.

Reviewing code and explaining why a particular implementation might produce unexpected behavior.

AI was used as an educational aid rather than as a replacement for understanding or testing the implementations. The project code was written, tested, and validated against the requirements of the 42 Libft project.

Project Structure

A typical project structure is:
``
libft/
├── Makefile
├── README.md
├── libft.h
├── ft_*.c
└── ...
``

**Goal**

The main goal of Libft is to build a personal C utility library that can be reused in future 42 projects.

More importantly, the project provides practical experience with the fundamentals of C programming, particularly memory management, pointers, strings, data structures, compilation, and low-level programming.
