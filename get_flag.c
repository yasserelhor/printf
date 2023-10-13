#include "main.h"


/**
 * get_flag - Set flags based on a character.
 *
 * This function sets flags in the provided 'flags_t' structure based on the
 * given character 's' (if it's a valid flag character).
 *
 * @s: The character representing a flag.
 * @f: Pointer to the flags_t structure.
 *
 * Return: 1 if a valid flag was found and set, 0 otherwise.
 */

int get_flag(char s, flags_t *f)
{
	int v = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			v = 1;
			break;
		case ' ':
			f->space = 1;
			v = 1;
			break;
		case '#':
			f->hash = 1;
			v = 1;
			break;
	}

	return (v);
}
