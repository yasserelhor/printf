#include "main.h"


/**
 * convert - Convert an unsigned long integer to a string in the specified base.
 *
 * This function converts an unsigned long integer 'num' to a string representation
 * in the given 'base'. It uses lowercase characters if 'lowercase' is true.
 *
 * @num: The number to convert.
 * @base: The base for conversion (e.g., 10 for decimal, 16 for hexadecimal).
 * @lowercase: Use lowercase characters for hexadecimal (1) or uppercase (0).
 *
 * Return: A pointer to the converted string.
 */


char *convert(unsigned long int num, int base, int lowercase)
{
	static char *r;
	static char buf[50];
	char *p;

	r = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buf[49];
	*p = '\0';
	do {
		*--p = r[num % base];
		num /= base;
	} while (num != 0);

	return (p);
}
