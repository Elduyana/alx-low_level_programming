#include "main.h"
/**
* print_diagonal - main funciton that prints diagonal line
* @n: integer(number of times)
* Return: 0
*/
void print_diagonal(int n)
{
int a;
int b;

if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}