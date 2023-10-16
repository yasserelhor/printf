#include "main.h"

/**
 * printf_char - Conversion function for printing a character.
 *
 * @val: A va_list containing the character to be printed.
 *
 * Return: The number of characters printed.
 */

int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
