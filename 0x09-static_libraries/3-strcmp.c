#include "holberton.h"
/**
*_strcmp - fucntion that compares string s1 to s2
*@s1: string variable to compare to s2
*@s2: string variable thats compared to by s1
*
*Return: 0 = strings are the same
*/
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (comp == 0)
		return (0);
	else
		return (0);
}
