#include "main.h"
/**
*print_diagonal - entry function
*@n: number of times \ should be printed
*Description: Draw a diagonal line on terminal
*Return: 0 = Success
*/
void print_diagonal(int n)
{
	int i;
	int d;

	if (n <= 0)
		_putchar(10);
	else
	{
	for (i = 0; i < n; i++)
	{
		for (d = 0; d < i; d++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
	}
	}
}
