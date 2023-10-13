#include "main.h"

/**
 * get_print - Get the appropriate print function for a format specifier.
 *
 * This function returns a function pointer based on the given format specifier.
 *
 * @s: The format specifier character.
 *
 * Return: Function pointer to the corresponding print function, or NULL if not found.
 */


int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
		};
	int flags = 14;

	register int v;

	for (v = 0; v < flags; v++)
		if (func_arr[v].c == s)
			return (func_arr[v].f);
	return (NULL);
}
