#include "holberton.h"
/**
*rot13 - encodes a string
*@s: variable used
*
*Return: 0 = success
*/
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 97 && s[i] <= 109) || (s[i] >= 65 && s[i] <= 77))
		{
			s[i] += 13;
			continue;
		}
		while ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
		{
			s[i] -= 13;
			continue;
		}
	}
	return (s);
}
