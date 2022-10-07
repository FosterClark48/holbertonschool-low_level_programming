#include "main.h"
/**
*_print_rev_recursion - Prints string s in reverse
*@s: string to be printed
*
*Return: no return
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
