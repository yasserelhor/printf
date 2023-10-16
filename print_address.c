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
	int len;

	puthex(ptr);
	len = hexlen(ptr);
	return (len);
}
