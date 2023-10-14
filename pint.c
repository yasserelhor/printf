#include "main.h"

/**
 * numlen - counts the number of digits in a given number.
 * @num: the number.
 *
 * Return: number of digits.
 */
int numlen(int num)
{
	int len = 0;

	if (num == 0)
	{
		return (1);
	}
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

/**
 * putnbr - print a number.
 * @num: the number.
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
