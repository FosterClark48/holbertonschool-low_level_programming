#include "main.h"
#include "_memcpy.c"
#include "strlen.c"
/**
*_strstr - returns pointer to first occurence of str needle in str haystack
*@haystack: pointer to string to be scanned
*@needle: pointer to a str containing seq of char to match
*
*Return: null
*/
char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *) (haystack));
	}

	for ( ; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;

		while (1)
		{
			if (*b == 0)
			{
				return ((char *) (haystack));
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return ('\0');
}
