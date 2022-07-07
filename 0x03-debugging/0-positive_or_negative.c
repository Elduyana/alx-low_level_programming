#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - main function
* Return: 0
*/

void positive_or_negative(int i)
{
int n;
i = 0;
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
