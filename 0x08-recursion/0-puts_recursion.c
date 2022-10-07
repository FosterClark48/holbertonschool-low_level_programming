#include "main.h"
/**
*_puts_recursion - 
*@s: String to be written
*
*Return: non-negative integer
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
