#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - Struct to match
 * format identifiers with conversion functions.
 * @id: The format identifier, e.g., "c" for character.
 * @f: A pointer to the conversion function.
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int _printf(const char *format, ...);
int _putchar(char c);
int printf_37(void);
int _strlen(char *s);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char * const format, ...);

#endif
