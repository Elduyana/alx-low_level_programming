#include <stdio.h>
#include "main.h"

/**
* print_to_98 - main function
* @n: first number
*/
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
if (n == 98)
_putchar("%d\n", n);
else
_putchar("%d, ", n);
n = n + 1;
}
}
else if (n > 98)
{
while (n >=)
{
if (n == 98)
_putchar("%d\n", n);
else
_putchar("%d, ", n);
n = n - 1;
}
}
}
