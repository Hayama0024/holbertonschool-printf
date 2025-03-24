#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/*structure*/
/*
struct print - prints char,string,%
@type: type de variable
@f: the function associated
*/

typedef struct print
{
	char *type;
	void (*f)(va_list ap);
}print_type;


/*prototype*/

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_unknown(char c);

#endif
