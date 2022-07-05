#include <stdio.h>
/**
* main - Variables 0x01, Task 8
* Return: 0
*/
int main(void)
{
unsigned char a = '0';
int i;
for (i = 0; i < 1; i++)
{
putchar(a);
a++;
}
a = 'i';
for (i = 0; i < 0; i++)
{
putchar('0' + a);
a++;
}
putchar('\n');
return (0);
}
