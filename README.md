# README for Printf.

## 29th March 2023 verion 1.0

This project is an implementation of the printf function in C. This project mimics the behaviour of the standard printf function, allowing the user to write output to stdout, the standard output stream, using a character string as a format.

The printf function takes in a format string as the first argument, followed by any number of additional arguments, with varying types. This project handles all the standard format specifiers, such as %s, %d, and %x. It also supports flags and width modifiers.

Internally, the printf function makes use of the write, malloc, free, va_start, va_end, va_copy and va_arg functions and macros, as specified in the man pages.

This project is a great resource for anyone looking to understand the behaviour of the standard printf function in C, or for those looking to implement their own version of printf.

## General Requirements 

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

If the task does not specify what to do with an edge case, do the same as printf

Written by **Gabriel Gyimah Amanfo** and **Larry Bah**
