#include "main.h"
#include "_strchr.c"
/**
*_strpbrk - scans & finds first char in str s matching char in str accept
*@s: null-terminated string to be scanned
*@accept: null-terminated string containing char to match
*
*Return: \0 - Returns pointer to null
*/
char *_strpbrk(char *s, char *accept)
{
	if ((*s == '\0') || (*accept == '\0'))
		return ('\0');

	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
