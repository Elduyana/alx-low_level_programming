#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints ths sum of two diagonals
* @a: pointer to array
* @size: size of an array
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumOfdiag1, sumOfdiag2;
	size1 = 0;
	sumOfdiag1 = 0;
	sumOfdiag2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumOfdiag1 = sumOfdiag1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumOfdiag2 = sumOfdiag2 + a[i];
	}
	printf("%d, %d\n", sumOfdiag1, sumOfddiag2);
}
