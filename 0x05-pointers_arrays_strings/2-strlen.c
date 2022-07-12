#include "main.h"

/**
* _strlen - main function that returns the length of a string.
* @s: string
* Return: length of a string
*/
int _strlen(char *s)
{
int len;
for (; *s != '\0'; s++)
{
	len += 1;
}
	return (len);
}
