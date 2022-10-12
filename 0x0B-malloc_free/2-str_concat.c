#include "main.h"
/**
**str_concat - concatenates two strings
*@s1: first string to concatenate second string to
*@s2: Second string to concatenate onto first string
*Return: n
*/
char *str_concat(char *s1, char *s2)
{
	char *n;
	int len1, len2, i;

	if (!(s1))
	{
		s1 = "";
	}
	if (!(s2))
	{
		s2 = "";
	}
	len1 = len2 = 0;
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	n = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!(n))
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		n[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		n[i + len1] = s2[i];
	}
	n[len1 + len2 + 1] = '\0';

	return (n);
}
