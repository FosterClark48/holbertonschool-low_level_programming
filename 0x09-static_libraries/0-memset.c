#include "main.h"
/**
*_memset - copies val of b into each of the first n chars pointed to by s
*@s: pointer to the destination object
*@b: Value to be filled
*@n: number of bytes to be filled starting from s to be filled
*
*Return: s - destination object
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char) b;
	}
	return (s);
}
