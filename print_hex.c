#include "main.h"

/**
 * hexlen - Calculates the number of digits in a long integer.
 * @num: The long integer for which to count digits.
 *
 * Return: The number of digits in the integer.
 */

int hexlen(unsigned long int num)
{
	int len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

/**
 * puthex - Recursively prints a long integer to the standard output (stdout).
 * @num: The long integer to be printed.
 */

void puthex(unsigned long int num)
{
	if (num < 16)
	{
		_putchar("0123456789abcdef"[num]);
		return;
	}
	puthex(num / 16);
	_putchar("0123456789abcdef"[num % 16]);
}

/**
 * print_hex - Conversion function for printing an integer.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_hex(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, int);
	puthex(num);
	len = hexlen(num);
	return (len);
}
