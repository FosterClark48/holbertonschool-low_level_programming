#include "variadic_functions.h"
/**
*print_numbers - Prints numbers
*@separator: string to be printed between numbers
*@n: number of ints passed to function
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
