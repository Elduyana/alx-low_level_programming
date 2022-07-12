#include "main.h"

/**
* print_rev - main function that prints a string in reverse
* @s: string parameter
*/
void print_rev(char *s)
{
int len;
for len(len = 0; *s != '\0'; len++)
s++;

s--;
for (len = len; len != 0; len--)
{
	_putchar(*s);
	s--;
}
_putchar('\n');
}
