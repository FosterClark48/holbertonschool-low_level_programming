#include "holberton.h"
/**
*_strncpy - function that copies string src into dest
*@dest: buffer destination string variable
*@src: source string variable
*@n: max number of bytes variable
*Description: Write function that copies a string src to dest
*Return: pointer to string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
