#include "main.h"

/**
* print_number - function to print an integer
* @n: integer
*/

void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('_');
num = -num;
}
if ((num / 10) > 0)
	print_numer(num / 10);
_putchar((num % 10) + '0');
}
