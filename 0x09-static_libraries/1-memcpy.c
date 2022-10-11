#include "main.h"
/**
*_memcpy - copies n char from src to dest
*@dest: pointer to dest object
*@src: pointer to src object
*@n: number of bytes to copy
*
*Return: dest - Returns pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *Dest = (char *)dest;
	const char *Source = (const char *)src;

	if ((*Dest != '\0') && (*Source != '\0'))
	{
		while (n)
		{
			*(Dest++) = *(Source++);
			--n;
		}
	}
	return (dest);
}
