#include "main.h"
/**
*factorial - function to return factorial of n
*@n: integer to use to find factorial of
*
*Return: factorial of int n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
