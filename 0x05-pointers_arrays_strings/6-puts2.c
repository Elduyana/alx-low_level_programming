#include "main.h"

/**
* puts2 - main function that prints every other character of a string
* @str: string
* Return: 0
*/
void puts2(char *str)
{
int a;
for (a = 0; *str != '\0'; a++)
{
if (a % 2 == 0)
_putchar(*str);
str++;
}
_putchar('\n');
}
