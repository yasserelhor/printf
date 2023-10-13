#include "main.h"


/**
 * print_address - Print an address in hexadecimal format.
 *
 * This function prints the given unsigned long integer 'd' as an address
 * in hexadecimal format, preceded by "0x".
 *
 * @l: Argument list containing the address to print.
 * @f: Pointer to flags structure (unused).
 *
 * Return: The number of characters printed.
 */


int print_address(va_list l, flags_t *f)
{
	char *s;
	unsigned long int d = va_arg(l, unsigned long int);

	register int c = 0;

	(void)f;

	if (!d)
		return (_puts("(nil)"));
	s = convert(d, 16, 1);
	c += _puts("0x");
	c += _puts(s);
	return (c);
}
