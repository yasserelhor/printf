#include "main.h"

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

void putbin(unsigned int num)
{
	if (num == 0)
		return;
	putbin(num / 2);
	_putchar(num % 2 + '0');
}

int print_bin(va_list args)
{
	unsigned int num;
	int len;

	num = va_arg(args, int);
	putbin(num);
	len = binlen(num);
	return (len);
}
