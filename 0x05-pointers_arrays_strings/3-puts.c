#include "main.h"

/**
* _puts - main function that prints a string followed by a new line
* @str: string
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
