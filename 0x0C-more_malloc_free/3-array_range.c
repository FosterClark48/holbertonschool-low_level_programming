#include "main.h"
#include <stdlib.h>
/**
*array_range - creates array of ints
*@min: beginning of array
*@max: end of array
*Return: pointer
*/
int *array_range(int min, int max)
{
	int i, j, *p, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
