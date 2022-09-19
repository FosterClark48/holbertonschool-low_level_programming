#include <stdio.h>
/**
*main - Entry Function
*
*Return: 0 - Standard Return
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
