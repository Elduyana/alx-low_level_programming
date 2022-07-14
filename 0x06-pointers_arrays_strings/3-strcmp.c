#include "main.h"

/**
* _strcmp - function to compare strings
* @a1: string 1
* @a2: string 2
* Return: differecne
*/
int _strcmp(char *a1, char *a2)
{
int x;

for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
{
if (s1[x] != s2[x])
return (s1[x] - s2[x]);
}
return (0);
}
