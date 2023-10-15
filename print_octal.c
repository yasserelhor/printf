#include "main.h"

/**
 * octlen - Calculates the number of digits in a long integer.
 * @num: The long integer for which to count digits.
 *
 * Return: The number of digits in the integer.
 */

int octlen(unsigned int num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num /= 8;
	}
	return (len);
}

/**
 * putnbr - Recursively prints a long integer to the standard output (stdout).
 * @num: The long integer to be printed.
 */

void putoct(unsigned int num)
{
	if (num < 8)
	{
		_putchar(num + '0');
		return;
	}
	putoct(num / 8);
	_putchar(num % 8 + '0');
}

/**
 * print_oct - Conversion function for printing an integer.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_oct(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, int);
	putoct(num);
	len = octlen(num);
	return (len);
}
