#include "main.h"

/**
* leet - function to encode a string
* @m: string to be encoded
* Return: encoded string
*/
char *leet(char *m)
{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char trw[5] = {'4', '3', '0', '7', '1'};
while (m[a])
{
b = 0;
while (b < l)
{
if (m[a] == tr[b] || m[a] - 32 == tr[b])
m[a] = trw[b];
b++;
}
a++;
}
}
