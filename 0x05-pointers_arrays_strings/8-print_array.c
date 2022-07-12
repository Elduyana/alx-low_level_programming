#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_array - main function to print n elements of an array of integers
* @a: pointer
* @n: number of elements of the array
*/
void print_array(int *a, int n)
{
int b, c;
for (b = 0; b < n; b++)
{
c = *(a + b);
printf("%d", c);
if (b != n - 1)
printf(", ");
}
printf("\n");
}
