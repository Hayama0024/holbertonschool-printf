#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	char *str;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);
			write(1, &c, 1);
			count++;
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			while(*str)
			{
				write(1, str, 1);
				str++;
				count++;
			}
		}
		else if (format[i] == '%')
		{
			write(1, "%", 1);
			count++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
