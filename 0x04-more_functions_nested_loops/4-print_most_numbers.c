#include "main.h"
/**
*print_most_numbers - Entry function
*
*Description: Print numbers 0-9 except 2 & 4
*Return: 0 for success
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
	_putchar('\n');
}
