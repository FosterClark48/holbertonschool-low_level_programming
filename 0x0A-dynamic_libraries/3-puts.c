#include "main.h"
/**
*_puts - Entry function to print string
*@str: pointer to value
*Description: prints string
*Return: 0 = Success
*/
void _puts(char *str)
{
	while (*str)

	_putchar(*str++);

	_putchar('\n');

}
