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
	int digits = 1;
	int divisor = 1;
	int i, digit_value;
	char c;


	/* Convert negative intergers to positive*/
	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}

	/*Calculate the number of digits*/
	while (temp /= 10)
	{
		digits++;
	}

	while (digits--)
	{
		for (i = 0; i < digits; i++)
		{
			divisor *= 10;
		}

		digit_value = num / divisor;
		c = '0' + digit_value;
		write(1, &c, 1);
		count++;
		num -= digit_value * divisor;
	}

	return count;
}
