#include "main.h"

/**
 * unslen - Calculates the number of digits in a long integer.
 * @num: The long integer for which to count digits.
 *
 * Return: The number of digits in the integer.
 */

int unslen(unsigned int num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

/**
 * putuns - Recursively prints a long integer to the standard output (stdout).
 * @num: The long integer to be printed.
 */

void putuns(unsigned int num)
{
	if (num < 10)
	{
		_putchar(num + '0');
		return;
	}
	putnbr(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_unsigned - Conversion function for printing an integer.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_unsigned(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, int);
	putuns(num);
	len = unslen(num);
	return (len);
}
