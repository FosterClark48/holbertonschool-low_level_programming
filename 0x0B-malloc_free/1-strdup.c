#include "main.h"
/**
**_strdup - returns pointer to a newly allocated space, w/ copy of string str
*@str: String to copy
*Return: a pointer to duplicated string. NULL if insufficient memory
*/
char *_strdup(char *str)
{
	char *n;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len++])
	{
		;
	}
	n = malloc(sizeof(char) * len);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		n[i] = str[i];
	}
	return (n);
}
