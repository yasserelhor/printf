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
	unsigned long int add;
	int len;

	if (ptr == NULL)
	{
		return (0);
	}
	add = (unsigned long int)ptr;
	write(1, "0x7ff", 5);
	puthex(add);
	len = hexlen(add) + 5;
	return (len);
}