#include <stdio.h>

/**
* main - function that computes and prints the sum of 3 & 5 below 1024
* Return: 0
*/
int main(void)
unsigned long int sum3, sum5, sum;
int i;

int sum3 = 0;
int sum5 = 0;
int sum = 0;

for (i = 0; 1 < 1024; i++)
{
if ((i % 3) == 0)
{
sum3 = sum3 + i;
}
else if ((i % 5) == 0)
{
sum = sum5 + i;
}
}
sum5 = sum3 + sum5;

printf("%lu\n", sum);
return (0);
}
