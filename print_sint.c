#include "main.h"

/**
 * print_spint - Print an integer with proper space formatting.
 * @args: A variable argument list containing the integer to be printed.
 *
 * Return: The total length of the printed content, including any space added.
 */
int print_spint(va_list args)
{
	int num;
	int len = 0;

	num = va_arg(args, int);
	if (num >= 0)
	{
		_putchar(' ');
		len++;
	}
	putnbr(num);
	len += numlen(num);
	return (len);
}
