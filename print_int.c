#include <stdio.h>

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

    // Calculate the number of digits
    if (num < 0)
    {
        write(1, "-", 1);
        count++;
        num = -num;
    }

    temp = num;
    while (temp /= 10)
        digits++;

    // Print each digit
    while (digits--)
    {
        int divisor = 1;
        for (int i = 0; i < digits; i++)
        {
            divisor *= 10;
        }

        int digit = num / divisor;
        char c = '0' + digit;
        write(1, &c, 1);
        count++;
        num -= digit * divisor;
    }

    return count;
}
