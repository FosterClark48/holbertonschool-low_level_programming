#include "main.h"
#include <string.h>
/**
*print_rev - prints a string in reverse
*@s: variable used to store value
*Description: Write a function that prints a string in reverse
*Return: 0 = Success
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
