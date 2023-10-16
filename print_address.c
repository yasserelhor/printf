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

	add = (long unsigned int)ptr;
	write(1, "0x7", 3);
	puthex(add);
	len = hexlen(add);
	return (len);
}
