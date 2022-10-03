#include "holberton.h"
/**
*cap_string - Function to cap first letter of each word
*@str: variable used for string to cap
*
*Return: String of capitalized words
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == '{'
			|| str[i] == '}' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			else
				continue;
		}
		else
			continue;
	}
	return (str);
}
