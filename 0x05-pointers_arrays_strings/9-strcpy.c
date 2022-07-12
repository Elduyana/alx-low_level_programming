#include "main.h"
#include <stdio.h>

/**
* _strcpy - main function that copies the string pointed to by src.
* Return: dest
* @dest: pointer
* @src: pointer
*/
char *_strcpy(char *dest, char *src)
{
int a;
for (a = 0; *src != '\0'; a++)
{
dest[a] = *src;
src++;
}
dest[a++] = *src;
return (dest);
}
