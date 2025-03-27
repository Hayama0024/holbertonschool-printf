
# _printf 

## Description :memo:
This repository is the first group project (by Ryota Higa and Emi Hatano) for the Holberton school foundation class.
This project creates a custom printf() function called _printf().<br>
 _printf() - Produce output to stdout according to a format described below similar to the printf() function.


## Environment :computer:

- **Language:** C
- **Operating System:** Ubuntu 22.04
- **git version:** 2.34.1
- **gcc version:** 11.4.0
-  **Style guideline:**  [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Install :arrow_down:
```
$ git clone https://github.com/Hayama0024/holbertonschool-printf.git
```

## Compilation :left_right_arrow:
To compile the project, use the following command:
```
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
## Usage  :bulb:
The _printf function can be used similarly to the standard printf function:
```
_printf(const char *format, ...)
```

format: refers to a string with any number of specifiers followed by a ‘`%`’ symbol.

_printf supports the following format specifiers:
| Specifier | output                          |
|-----------|---------------------------------|
| %c        | prints a single character     
| %s        | prints a string of characters   |
| %%        | prints a percentage sign        |
| %d        | prints integers                 |
| %i        | prints integers                 |


## Examples  :pencil2:
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
**Result**
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[00, 00]
Length:[39, 39]
Negative:[-000000]
Negative:[-762534]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[00]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
## Man page :book:
```
$ cat man_3_printf
```
## Testing :white_check_mark:
To run tests, to check the overall functionality of the program, compile with `main.c` as the main file:
 ```
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
$ ./a.out
```

## Flow chart :round_pushpin:
![Image](https://github.com/user-attachments/assets/86196ae5-48ce-46b4-9344-51940f7a9f13)

## Authors :bookmark:
[Ryota Higa](https://github.com/Hayama0024)<br>
[Emi Hatano](https://github.com/Emi-H106)
