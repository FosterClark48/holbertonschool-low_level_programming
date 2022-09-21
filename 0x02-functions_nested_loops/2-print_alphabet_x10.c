#include "main.h"
/**
*print_alphabet_x10 - prints alpha 10x
*
*Return: 0 - Truth
*/
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
