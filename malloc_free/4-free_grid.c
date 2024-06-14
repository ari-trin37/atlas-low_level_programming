#include "main.h"
/**
 * free_grid - frees the memory of a double pointer.
 * @grid: double pointer, helps create 2 dimen. grid.
 * @height: y dimension of grid
 *
 * Return: nothing
 * 
 **/

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		{
			return;
		}
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
