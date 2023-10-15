#include "main.h"

/**
 * putHEX - Recursively prints a long integer to the standard output (stdout).
 * @num: The long integer to be printed.
 */
void putHEX(unsigned int num)
{
	if (num < 16)
	{
		_putchar("0123456789ABCDEF"[num]);
		return;
	}
	putHEX(num / 16);
	_putchar("0123456789ABCDEF"[num % 16]);
}

/**
 * print_HEX - Conversion function for printing an integer.
 * @args: A va_list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_HEX(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, int);
	putHEX(num);
	len = hexlen(num);
	return (len);
}
