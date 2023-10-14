#include "main.h"
/**
 * _putchar - Writes a single character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written (1).
 *	   On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
