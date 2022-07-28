#include "main.h"
#include <stdio.h>
/**
* _memcpy - memory copier
* @dest: source string
* @n: buffer length
* @src: memory area
* Return: new string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
