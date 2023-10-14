#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writes a single character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(int c)
{
	write(1, &c, 1);
	return (1);
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

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

/**
 * fprint - Print formatted output to the standard output (stdout).
 *
 * @format: A pointer to a format string that specifies the output format.
 * @args: Variable arguments list based on the format string.
 *
 * Return: The total number of characters printed to stdout.
 */
int fprint(const char *format, va_list args)
{
	int word_counter = 0, digits, number;

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
					word_counter += _putchar(va_arg(args, int));
					break;
				case 's':
					word_counter += putstr(va_arg(args, char *));
					break;
				case '%':
					word_counter += _putchar('%');
					break;
				case 'd':
here:
					number = va_arg(args, int);
					putnbr(number);
					digits = numlen(number);
					word_counter += digits;
					break;
				case 'i':
					goto here;
				default:
					write(2, "Error\n", 5);
					return (-1);
			}
		}
		format++;
	}
	return (word_counter);
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

	va_start(args, format);
	word_counter = fprint(format, args);
	va_end(args);
	return (word_counter);
}
