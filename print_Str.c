#include "main.h"

/**
 * print_Str - prints the string.
 * @args: list of arguments.
 *
 * Return: length of the string.
 */
int print_Str(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;
	int len = 0;

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\x0", 3);
			putHEX(str[i]);
			len = hexlen(str[i]) + 3;
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
		i++;
	}
	return (len);
}
