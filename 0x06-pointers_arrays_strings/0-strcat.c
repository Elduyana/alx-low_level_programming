#include "main.h"

/**
* _strcat - main function that appends the src string to the dest string
* @dest: string
* @src: string
*  Return: dest
*/
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
