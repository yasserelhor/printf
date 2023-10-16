#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: A pointer to the string to measure.
 *
 * Return: The length of the string
 * (the number of characters in the string).
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
