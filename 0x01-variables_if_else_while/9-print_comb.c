#include <stdio.h>
/**
* main Variables 0x01, Task 9
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar('44');
putchar('32');
}
}
putchar('\n');
return (0);
}

