#include "main.h"
/**
* print_line - main function
* @n: integer
*/
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 0; a < n; a++)
{
_putchar(95);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}

