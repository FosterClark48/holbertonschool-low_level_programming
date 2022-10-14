#include "main.h"
/**
*_strspn - gets length of str pointed to by s consisting of char from accept
*@s: the null-terminated string to be scanned
*@accept: the null-terminated string containing char to match
*
*Return: len - Returns length of segment
*/
unsigned int _strspn(char *s, char *a)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
				break;
		}
		if (s[i] != a[j])
			break;
	}

	return ((unsigned int)i);
}
