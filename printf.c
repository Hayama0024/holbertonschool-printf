#include "main.h"
#include <stdarg.h>
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
	return (1);
}

/**
 * print_string - prints a str
 * @args: list of arg
 * Return: num of char printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;

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

int print_unknown(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

/**
 * _printf - simplified printf function
 * @format: format string
 * Return: num of characters printed
 */
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
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == 'd' || format[i] == 'i')
			       	count += print_int(args);
			else if (format[i] == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else
				count += print_unknown(format[i]);
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
