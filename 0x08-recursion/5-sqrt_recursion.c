#include "main.h"
/**
*helper - returns nat square root of a number
*@x: Number to check
*@i: number of checks
*
*Return: int of checks
*/
int helper(int x, int i)
{
	if (i * i > x)
	{
		return (-1);
	}
	if (i * i == x)
	{
		return (i);
	}
	return (helper(x, i + 1));
}

/**
*_sqrt_recursion - returns natural square root of n
*@n: number to find square root of
*
*Return: Square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}
