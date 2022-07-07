#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * positive_or_negative - a function that prints out postive and negative values
 * * Return: 0
*/
void positive_or_negative(int i)
{
int n;
srand(time(0));
n = i;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
