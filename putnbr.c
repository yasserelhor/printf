#include "main.h"

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

int print_int(va_list args)
{
	int num;
	int len;

	num = va_arg(args, int);
	putnbr(num);
	len = numlen(num);
	return (len);
}
