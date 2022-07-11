#include "main.h"

/**
* swap_int - main function for swapping two integers
* @a: Parameter 1
* @b: Parameter 2
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
