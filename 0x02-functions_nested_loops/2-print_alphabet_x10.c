#include "main.h"

/**
* print_alphabet_x10 - Main function
*/
void print_alphabet_x10(void)
{
int l;
int m;
for (m = 0; m < 10; m++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}

