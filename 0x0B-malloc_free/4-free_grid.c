#include "main.h"
/**
*free_grid - frees alloc_grid of memory
*@grid: Array to free
*@height: height of array
*Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
