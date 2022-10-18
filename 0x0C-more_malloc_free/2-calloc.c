#include "main.h"
#include <stdlib.h>
/**
*_calloc - sets memory to 0 after allocating
*@nmemb: no. of elements
*@size: size of bytes
*Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
