#include "main.h"

/**
 * check_format - Check if a format specifier is valid and find its index.
 *
 * This function checks if the character at the specified 'index' in the
 * 'format' string corresponds to a valid format specifier. If found, it
 * returns the index of the specifier in the 'convert_match' array.
 *
 * @format: The format string to check.
 * @index: The current index within the format string.
 *
 * Return: Index of the format
 * specifier in the 'convert_match' array, or -1 if not found.
 */

int check_format(const char *format, int index)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%d", print_int}, {"%i", print_int},
		{"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex},
		{"%X", print_HEX}, {"%S", print_Str},
		{"%p", print_adrs},
		{NULL, NULL}
	};
	int i = 0, j = 0, first_index = index;

	while (m[i].id)
	{
		if (format[index] == m[i].id[j])
		{
			if (m[i].id[j + 1] != '\0')
			{
				index++;
				j++;
			}
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	if (m[i].f == NULL)
	{
		return (-1);
	}
	return (i);
}
