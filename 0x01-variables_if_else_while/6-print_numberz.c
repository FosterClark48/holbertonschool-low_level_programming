#include <stdio.h>
/**
*main - Entry Function
*
*Return: 0 - Standard Return
*/
int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		putchar((base10 % 10) + '0');

	}
	putchar('\n');
	return (0);
}
