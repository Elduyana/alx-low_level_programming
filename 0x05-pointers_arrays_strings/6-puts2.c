#include "main.h"

/**
* puts2 - main function that prints every other character of a string
* @str: string
* Return: 0
*/
void puts2(char *str)
{
int i;
for (int i = 0; i < strlen(str); i += 2)
{
_putchar(str[i]);
}
