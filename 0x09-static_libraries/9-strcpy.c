#include "main.h"
/**
*_strcpy - function that copies a string
*@dest: destination variable
*@src: source variable
*Description: function copying string including null
*Return: 0 = Success
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
