#include "holberton.h"
/**
*_strcat - concatenates two strings function
*@dest: Destination variable
*@src: Source destination
*Description: Function that concatenates two strings
*Return: 0 = Success
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	for (i = 0; dest[i]; i++)

		;

		for (len = 0; src[len]; len++)
		{
			dest[i] = src[len];
			i++;
		}
		return (dest);
}
