#include "main.h"
/**
* print_triangle main function
* @size: dimension
*/
void print_triangle(int size)
{
int a;
int b;
a = 1;
while (a <= size && size > 0)
{
b = 0;
while (b < size - a)
{
_putchar(' ');
b++;
}
b = 0;
while (b < a)
{
_putchar(35);
b++;
}
_putchar('\n');
b++;
}
if (a == 1)
_putchar('\n');
}
