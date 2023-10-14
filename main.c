#include "main.h"
#include <stdio.h>
int main(void)
{
    _printf("%%\n");
    _printf("%c\n", 'A');
    _printf("%s\n", "hello world!");
    _printf("%d\n", 17);
    _printf("%i\n", 0x16);
    return (0);
}
