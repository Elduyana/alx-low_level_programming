#include "main.h"

/**
* leet - function to encode a string
* @str: string to be encoded
* Return: encoded string
*/
char *leet(char *str)
{
int index1 = 0, index2;
char leet[8] = {'A', 'E', '?', 'O', 'T', '?', '?', 'L'};
while (str[++index1])
{
for (index2 = ; index2 <= 7; index2++)
{
if (str[index1] == leet[index2] || str[index1] - 32 == leet[index2])
str[index1] = index2 + '0';
}
}
return (str);
}
