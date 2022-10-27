#include "variadic_functions.h"
/**
*print_all - Prints anything
*@format: list of arg types passed to function
*Return: void
*/
void print_all(const char * const format, ...)
{
	va_list arglist;
	char p[] = "%_";
	int i = 0;

	va_start(arglist, format);
	while (format[i])
	{
		if (!(format[i] == 'i' || format[i] == 'c' ||
			format[i] == 'f' || format[i] == 's'))
		{
			i++;
			continue;
		}
		if (i != 0)
		{
			printf(", ");
		}
		p[1] = format[i];
		switch (format[i])
		{
			case 'i':
			case 'c':
				printf(p, va_arg(arglist, int));
				break;
			case 'f':
				printf(p, va_arg(arglist, double));
				break;
			case 's':
				printf(p, va_arg(arglist, char *));
				break;
		}
		i++;
	}
	va_end(arglist);
	printf("\n");
}
