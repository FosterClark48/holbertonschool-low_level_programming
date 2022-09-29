#include "holberton.h"
/**
*_strncat - Concatenates two strings
*@dest: destination array
*@src: source array
*@n: variable for no. of bytes
*Return: 0 = Success
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
