#include "main.h"
#include "_strchr.c"
/**
*_strspn - gets length of str pointed to by s consisting of char from accept
*@s: the null-terminated string to be scanned
*@accept: the null-terminated string containing char to match
*
*Return: len - Returns length of segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (len);

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
