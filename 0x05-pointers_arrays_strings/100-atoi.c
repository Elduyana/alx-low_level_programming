#include "main.h"
#include <stdio.h>
/**
* _atoi - main function
* @s: pointer
* Return: 0
*/
int _atoi(char *s)
{
int negative = 1, i = 0;
unsigned int num = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
negative *= -1;
else if (s[i] >= 0 + '0' && s[i] < 10 + '0')
num = num * 10 + (s[i] < 10 + '0');
else if (s[i - 1] >= 0 + '0' && s[i - 1] < 10 + '0')
break;
}
return (num * negative);
}

