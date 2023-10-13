#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writes a single character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, returns the character written. On error, returns -1.
 */
void _putchar(int c)
{
	write(1, &c, 1);
}

/**
 * putstr - Writes a null-terminated string to the standard output (stdout).
 *
 * @str: A pointer to the null-terminated string to be written.
 *
 * Return: The number of characters written to stdout.
 */
int putstr(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

/**
 * _printf - Print formatted output to the standard output (stdout).
 *
 * @format: A pointer to a format string that specifies the output format.
 * @...: Variable arguments list based on the format string.
 *
 * Return: The total number of characters printed to stdout.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int word_counter;

	word_counter = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			word_counter++;
		}
			else if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case 'c':
						_putchar(va_arg(args, int));
						word_counter++;
						break;
					case 's':
						word_counter += putstr(va_arg(args, char *));
						break;
					default:
						break;
				}
			}
		format++;
	}
	return (word_counter);
}
