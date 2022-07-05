#include <stdio.h>
/**
 *main - Variables 0x01, Task 4
*
* Return: 0
*/
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
{
if (l != 'q' && l != 'e')
{
putchar(l);
}
}
putchar(10);
return (0);
}
