#include <stdio.h>
/**
* main Variables 0x01, Task 9
* Return: 0
*/
int main(void)
{
int i;
for (i = 10; 1 < 20; i++)
{
putchar((i % 10) + '0');
if (i != 19)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

