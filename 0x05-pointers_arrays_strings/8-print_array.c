#include "main.h"
#include <stdio.h>
/**
*print_array - prints array element
*@a: int var
*@n: int var
*Description: Function that prints elements of array
*Return: 0 = Success
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
