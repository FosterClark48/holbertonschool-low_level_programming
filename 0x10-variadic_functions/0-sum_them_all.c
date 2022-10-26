#include "variadic_functions.h"
/**
*sum_them_all - Sums of all its parameters
*@n: number of parameters
*Return: Sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arglist;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);
	return (sum);
}
