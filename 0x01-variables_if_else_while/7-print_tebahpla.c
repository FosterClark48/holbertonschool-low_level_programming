#include <stdio.h>
/**
*main - Entry Function
*
*Return: 0 - Standard Return
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
