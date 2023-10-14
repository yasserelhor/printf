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
		{"%%", printf_37},
	};

	va_list args;
	int i = 0, j, len = 0;
	int checker = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 2)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				checker = 1;
			}
			j++;
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
