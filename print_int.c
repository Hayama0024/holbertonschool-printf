#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_int - prints an integer
 * @args: list of arguments
 * Return: number of characters printed
 */


int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int temp = num;
	int divisor = 1;
	int digit_value;
	char c;


	/* Convert negative intergers to positive*/
	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}

	/*Calculate the divisor for the most singnificant digit*/
	while (temp /= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		digit_value  = num / divisor;
		c = '0' + digit_value;
		write(1, &c, 1);
		count++;
		num %= divisor;
		divisor /= 10;
	}

	return count;
}
