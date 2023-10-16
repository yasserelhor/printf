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
int print_int(va_list args);
int numlen(long num);
void putnbr(long num);
int print_bin(va_list args);
void putbin(unsigned int num);
int binlen(unsigned int num);
int unslen(unsigned int num);
void putuns(unsigned int num);
int print_unsigned(va_list args);
int print_oct(va_list args);
void putoct(unsigned int num);
int octlen(unsigned int num);
int print_hex(va_list args);
void puthex(unsigned long int num);
int hexlen(unsigned long int num);
int print_HEX(va_list args);
void putHEX(unsigned int num);
int print_Str(va_list args);
int print_adrs(va_list args);
int check_format(const char *format, int index);
int print_pint(va_list args);

#endif
