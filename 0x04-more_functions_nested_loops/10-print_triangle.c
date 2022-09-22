#include "main.h"
/**
*print_triangle - Entry Function
*@size: Size of triangle
*Description: Prints triangle
*Return: 0 = Success
*/
void print_triangle(int size)
{
	int i;
	int d;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{

		for (d = (size - 1); d >= 0; d--)
		{
			if (d > i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
