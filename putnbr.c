#include "main.h"

/**
 * numlen - Calculates the number of digits in a long integer.
 *
 * @num: The long integer for which to count digits.
 *
 * Return: The number of digits in the integer.
 */

int numlen(long num)
{
	int len;

	len = 0;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
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
 * putnbr - Recursively prints a long integer to the standard output (stdout).
 *
 * @num: The long integer to be printed.
 */

void putnbr(long num)
{
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		_putchar(num + '0');
		return;
	}
	putnbr(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * print_int - Conversion function for printing an integer.
 *
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_int(va_list args)
{
	int num;
	int len;

	num = va_arg(args, int);
	putnbr(num);
	len = numlen(num);
	return (len);
}
