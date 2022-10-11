#include "main.h"
/**
*_strchr - finds first occurence of c in str pointed to by s
*@s: pointer to the null-terminated byte string
*@c: character to search for
*
*Return: find - returns a pointer to the located character or null
*/
char *_strchr(char *s, char c)
{
	char *find = '\0';

	if (*s != '\0')
	{
		do {
			if (*s == (char)c)
			{
				find = s;
				break;
			}
		}
	while (*s++);
	}
	return (find);
}
