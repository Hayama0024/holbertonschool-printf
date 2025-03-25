#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_char - prints a char
 * @args: list of arguments
 * Return: number of char printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	return (count);
}

/**
 * print_string - prints a str
 * @args: list of arg
 * Return: num of char printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		write(1, str++, 1);
		count++;
	}
	return (count);
}

/**
 * print_unknown - prints unknown format as %
 * @c: unkwon specifier
 * Return: num of char printed
 */

int print_unknown(char c);
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}
				
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
				i++;

			if (format[i] == 'c')
			{
				print_char(args);
				count++;
			}
			else if (format[i] == 's')
			{
				print_str(args);
				count++;
			}
			else if (format[i] == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else
			{
				print_unknown(format[i]);
			}
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			va_end(args);
			return (-1);
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
