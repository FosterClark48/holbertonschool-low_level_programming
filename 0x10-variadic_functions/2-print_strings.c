#include "variadic_functions.h"
/**
*print_strings - prints strings
*@separator: string to be printed between strings
*@n: number of strings passed to the function
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
