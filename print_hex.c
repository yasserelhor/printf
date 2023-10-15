#include "main.h"

/**
 * print_hex - Print a decimal number in hexadecimal format.
 *
 * This function prints a decimal number 'num' in hexadecimal format.
 * If 'num' is negative, it prefixes it with a '-' sign.
 *
 * @num: The number to print in hexadecimal format.
 */

void print_hex(long num)
{
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num < 16)
	{
		_putchar(num + '0');
		return;
	}
	putnbr(num / 16);
	_putchar(num % 10 + '0');
}
