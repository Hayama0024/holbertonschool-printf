
# _printf 

## Description
This repository is the first group project (by Ryota Higa and Emi Hatano) for the Holberton school foundation class.
This project creates a custom printf() function called _printf().
 _printf() - Produce output to stdout according to a format described below similar to the printf() function.


## Environment

- **Language:** C
- **Operating System:** Ubuntu 22.04
- **git version:** 2.34.1
- **gcc version:** 11.4.0
-  **Style guideline:**  [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Compilation
To compile the project, use the following command:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```
## Usage
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


## Examples
```
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percentage: %%\n");
    _printf("Integer: %d\n", 123);
    _printf("Integer: %i\n", 456);
    return (0);
}
```
**result**
```
H
Hello World
%
123
456
```
## Man page
(commende d'execution de la man page)

## Testing
To run tests, to check the overall functionality of the program, compile with `main.c` as the main file:
 ```
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
$ ./printf
```

## Flow chart
And this will produce a flow chart:
![Flow chart ](https://github.com/user-attachments/assets/3b03c81c-3eb8-4c4a-b7a8-ce091144054e)

## Authors
[Ryota Higa](https://github.com/Hayama0024)<br>
[Emi Hatano](https://github.com/Emi-H106)
