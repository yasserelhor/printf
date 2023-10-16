#include "main.h"

/**
 * print_adrs - print the address of a variable.
 * @args: the list of arguments.
 *
 * Return: number of digits printed.
 */
int print_adrs(va_list args)
{
	void *ptr = va_arg(args, void *);
	long unsigned int add;
	int len;

	if (ptr == NULL)
	{
		write(1, "(nil)", 1);
		return (5);
	}
	add = (unsigned long int)ptr;
	write(1, "0x", 2);
	puthex(add);
	len = hexlen(add) + 2;
	return (len);
}
