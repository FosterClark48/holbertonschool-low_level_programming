#include "main.h"
/**
*_strlen_recursion - Gets length of string s
*@s: string to get length from
*
*Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
