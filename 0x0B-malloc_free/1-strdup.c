#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *_strdup - returns a pointer to a new allocation
* @str: pointer
* Return: NULL if str is NULL and  memory is insufficient
*/
char *_strdup(char *str)
{
char *nstr;
unsigned int len, i;
if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
nstr = malloc(sizeof(char) * (len + 1));
if (nstr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
nstr[i] = str[i];
}
nstr[len] = '\0';
return (nstr);
}
