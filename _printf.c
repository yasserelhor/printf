#include "main.h"

/**
 * _printf - Custom printf function to print formatted output.
 *
 * @format: A pointer to a format string that specifies the output format.
 * @...: Variable arguments list based on the format string.
 *
 * Return: The total number of characters printed to stdout. -1 on error.
 */


int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%d", print_int}, {"%i", print_int},
		{"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex},
		{"%X", print_HEX}, {"%S", print_Str},
		{"%p", print_adrs}, {"%+i", print_pint},
		{"%+d", print_pint}, {"%+u", print_unsigned},
		{"%+x", print_hex}, {"%+X", print_HEX},
		{"%+o", print_oct},
		{NULL, NULL}
	};

	va_list args;
	int i = 0, len = 0, checker = 0, fct_index;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
		fct_index = check_format(format, i);
			if (fct_index != -1)
			{
				len += m[fct_index].f(args);
				checker = 1;
				i += _strlen(m[fct_index].id);
			}
		}
		if (checker == 0)
		{
			_putchar(format[i]);
			i++;
			len++;
		}
		checker = 0;
	}
	va_end(args);
	return (len);
}
