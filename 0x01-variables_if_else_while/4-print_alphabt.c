#include <stdio.h>
/**
*main - Entry Function
*
*Return: 0 - Standard Return
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar ('\n');
	return (0);
}
