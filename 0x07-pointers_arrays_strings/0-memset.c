#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: source string
* @b: constant byte
* @n:length of buffer
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned iint i = 0;
while (i < n)
{
*(s + i) = b;
}
return (s);
}
