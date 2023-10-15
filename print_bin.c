#include "main.h"

/**
 * binlen - number of digits of the binary representation of a number.
 * @num: thr number.
 *
 * Return: the number of a digits.
 */
int binlen(unsigned int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 2;
	}
	return (len);
}

/**
 * putbin - print decimal number in binary.
 * @num: the number.
 */
void putbin(unsigned int num)
{
	if (num == 0)
		return;
	putbin(num / 2);
	_putchar(num % 2 + '0');
}

/**
 * print_bin - print decimal number in binary.
 * @args: list of arguments (to extract the num from it).
 *
 * Return: the number of digits.
 */
int print_bin(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	putbin(num);
	len = binlen(num);
	return (len);
}
