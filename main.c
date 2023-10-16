#include "main.h"
#include <stdio.h>
int main(void)
{
	int x = 42;
	int *ptr = &x;
	int c = 42;
	int *ptr1 = &c;
        printf("*The address of c is: %p\n", (void *)ptr1);
	_printf("The address of x is: %p\n", (void *)ptr);
	return (0);
}
