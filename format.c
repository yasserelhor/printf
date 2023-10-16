#include "main.h"

int check_format(const char *format, int index)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%d", print_int}, {"%i", print_int},
		{"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex},
		{"%X", print_HEX}, {"%S", print_Str},
		{"%p", print_adrs}, {"%+i", print_pint},
		{"%+d", print_int}, {"%+u", print_insigned},
		{"%+o", print_oct}, {"%+x", print_hex},
		{"%+X", print_HEX},
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
