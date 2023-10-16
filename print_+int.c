#include "main.h"

/**
 * print_pint - Conversion function for printing an integer.
 *
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_pint(va_list args)
{
	int num;
	int len = 0;

	num = va_arg(args, int);
	if (num > 0)
	{
		_putchar('+');
		len++;
	}
	putnbr(num);
	len += numlen(num);
	return (len);
}
