#include "main.h"
/**
*print_square - entry function
*@size: Size of the square
*Description: Prints a square with \n
*Return: 0 - Success
*/
void print_square(int size)
{
	int i;
	int n;

	if (size <= 0)
		_putchar(10);
	else
	{
	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
