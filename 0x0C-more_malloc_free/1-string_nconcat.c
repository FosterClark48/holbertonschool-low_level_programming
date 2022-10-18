#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - sticks together n bytes of sring to another
*@s1: first string to append to
*@s2: second string to concatenate
*@n: number of bytes to concatenate from
*Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, *x;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!p)
		return (NULL);
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		p[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		p[i++] = s2[j++];

	p[i] = '\0';
	x = malloc(5);
	free(x);

	return (p);
}
