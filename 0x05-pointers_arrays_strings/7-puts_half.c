#include "main.h"
/**
*puts_half - entry function
*@str: calls for a string var
*Description: function that prints half a string
*Return: 0 = Success
*/
void puts_half(char *str)
{
	int len;
	int start;

	len = 0;
	while (str[len++] != '\0')
	{
		;
	}
	if (len % 2 != 0)
	{
		len--;
	}
	start = len / 2;
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
