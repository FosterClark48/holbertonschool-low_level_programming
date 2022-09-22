#include "main.h"
/**
*print_numbers - Entry function to print no's
*
*Description: Prints numbers 0-9
*Return: 0 means success
*/
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
