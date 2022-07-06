#include "main.h"

/**
* print_last_digit - main function
* @n: parameter
* Return: last digit
*/
int print_last_digit(int n)
{
int p;
p = (n % 10);
if (p < 0)
p = -p;
_putchar(p + '0');
return (p);
}
