#include "main.h"
/**
*_puts_recursion - prints string s, followed by \n
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
