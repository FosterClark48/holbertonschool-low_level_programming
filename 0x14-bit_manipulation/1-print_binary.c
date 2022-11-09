#include "main.h"
/**
*print_binary - converts int to binary
*@n: int to convert
*Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & x));
}
