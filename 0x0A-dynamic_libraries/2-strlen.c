#include "main.h"
/**
*_strlen - entry function for string length
*@s: String length value
*Description: Function that returns length of string
*Return: 0 = Success
*/
int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount] != '\0')
	{
		charCount++;
	}
	return (charCount);
}
