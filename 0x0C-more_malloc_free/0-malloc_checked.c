#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - returns pointer to allocated memory
*@b: size of memory needed
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
