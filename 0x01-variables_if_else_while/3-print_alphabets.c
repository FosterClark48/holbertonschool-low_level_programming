#include <stdio.h>
/**
*main - Entry fucntion
*
*Return: 0-Standard Return
*/
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
	return (0);
}
