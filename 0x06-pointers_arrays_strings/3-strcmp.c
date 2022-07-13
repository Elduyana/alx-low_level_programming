#include "main.h"

/**
* _strcmp - function to compare strings
* @a1: string 1
* @a2: string 2
* Return: differecne
*/
int _strcmp(char *a1, char a2)
{
int i = 0, diff = 0;
while (1)
{
if (a1[i] == '\0' && a2[i] == '\0')
break:
else if (a1[i] == '\0')
{
diff = a2[i];
break;
}
else if (a2[i] != a2[i])
{
diff = a1[i] - a2[i];
break;
}
else
i++;
}
return (diff);
}
