#include "holberton.h"
/**
*reverse_array - function to reverse array a
*@a: Array that we want to reverse
*@n: Number of elements in array
*
*Return: 0 = Success
*/
void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
