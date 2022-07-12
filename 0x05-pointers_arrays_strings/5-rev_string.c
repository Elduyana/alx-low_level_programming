#include "main.h"
#include <string.h>

/**
* rev_string - main function that reverses a string
* @s: string
*/
void rev_string(char *s)
{
int r, len, tmp;
len = strlen(s);
for (r = 0; r < len / 2; r++)
{
tmp = s[r];
s[r] = s[len - r - 1];
s[len - r - 1] = tmp;
}
}
