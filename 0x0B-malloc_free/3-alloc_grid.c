#include "main.h"
/**
***alloc_grid - function that returns a pointer to a 2 dim arr of ints
*@width: width of grid
*@height: height of grid
*Return: n
*/
int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	n = malloc(sizeof(int *) * height);
	if (!(n))
	{
		free(n);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		n[i] = malloc(sizeof(int) * width);
		if (!(n[i]))
		{
			for (; i >= 0; i--)
			{
				free(n[i]);
			}
			free(n);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}

	return (n);
}
