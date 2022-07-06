#include "main.h"

/**
* _isalpha - main function
* @c: a character
* Return: 0 or 1
*/
int _isalpha(int c)
{
return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}
