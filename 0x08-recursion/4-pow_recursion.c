#include "main.h"
/**
*_pow_recursion - returns value of x raised to power of y
*@x: int to get power of
*@y: in power of
*
*Return: exponent equivalent
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return ((_pow_recursion(x, y - 1) * x));
	}
}
