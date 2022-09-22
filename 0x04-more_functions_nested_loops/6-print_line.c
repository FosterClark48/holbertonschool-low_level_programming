#include "main.h"
/**
*print_line - entry function
*@n: number of characters
*Description: fucntion that draws a straight line
*Return: 0 = Success
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
