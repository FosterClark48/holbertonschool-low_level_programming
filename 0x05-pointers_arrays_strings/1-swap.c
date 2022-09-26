#include "main.h"
#include <stdio.h>
/**
*swap_int - swaps values of two ints
*@a: first int value to be swapped
*@b: second int value to be swapped
*Description: Swaps values of two ints
*Return: 0 = Success
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
