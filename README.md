*This project has been created as part of the 42 curriculum by maazizog*


# Description
The goal of this project is to recreate the C standard library function `printf`.

This project helps you understand:
- variadic functions
- formatted output
- argument parsing
- return value management

The function supports the following conversions:

- `%c` for characters
- `%s` for strings
- `%p` for pointers
- `%d` and `%i` for signed integers
- `%u` for unsigned integers
- `%x` and `%X` for hexadecimal numbers
- `%%` for printing a percent sign

The main challenge of this project is to reproduce the behavior of `printf` while handling different types of arguments and returning the correct number of printed characters. This library serves as a foundation for future 42 projects, because its functions can be reused in later programs.

# Instruction
### Compilation

```bash
make        # builds ft_printf.a
make clean  # removes object files
make fclean # removes object files and ft_printf.a
make re     # full rebuild
```
### Usage

after you create the library ft_printf.a with "make".
copy `ft_printf.a` and `ft_printf.h` into your project and include the header in your source files:

```c
#include "ft_printf.h"
```

then link your main.c with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Library Contents
The library contains reimplemented functions from the standard C library and additional helper functions.

## Included Functions

### Mandatory Functions
The mandatory function are either functions from the standard C library or other useful functions for future c projects.


## Resources

### References

- `man` pages for all reimplemented libc functions
- [Makefile Tutorial](https://makefiletutorial.com/#top): reference for writing the Makefile
- [42 Norm](https://github.com/42School/norminette): coding standard enforced at 42

### AI Usage

AI was used to get explanations of new difficult concepts after reading man, stackoverflow, and asked friend.

AI was not used to generate the core project logic without understanding; it was only used as a support tool for explanation and documentation.

## Notes
This project was written in C and follows the rules of the 42 curriculum.  
The focus was on understanding how standard library functions work internally and on writing clean, reusable code.