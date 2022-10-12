#include "main.h"
/**
**create_array - Creates an array of chars
*@size: size of array
*@c: char to initialize array with
*Return: null if no size points to array
*/
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size < 1)
	{
		return ('\0');
	}
	res = malloc(sizeof(char) * size);

	if (res == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}
	return (res);
}
