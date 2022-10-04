#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of two diagonals of a square matrix of int
*@a: variable used
*@size: size of square matrix given
*Return: 0 = Success
*/
void print_diagsums(int *a, int size)
{
	int ind, sum1 = 0, sum2 = 0;

	for (ind = 0; ind < size; ind++)
	{
		sum1 += a[ind];
		a += size;
	}
	a -= size;

	for (ind = 0; ind < size; ind++)
	{
		sum2 += a[ind];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
