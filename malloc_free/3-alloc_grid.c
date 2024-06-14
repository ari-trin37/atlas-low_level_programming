#include "main.h"
/**
 * alloc_grid - returns pointer to 2 dimensional array of int.'s
 * @width: width 
 * @heigth: height
 * Return: NULL due to w/h being 0.
 * 
 **/

int **alloc_grid(int width, int height);
{
	int x;
	int z;
	int i;

	if (width <= 0 || height <= 0)
		{
			return(NULL;)
		}


	int **grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
		{
			return(NULL); /* "check" to see if mem. allocation failed */	
		}

	for (int i = 0; i < height; i++) /* makes new memory for rows */
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i]) /* failure */

			for (int x = 0; x < i; x++) /* make new space for rows */
			{
				free(grid[x]);
			}
			free(grid); /* frees memory for the rows*/
			return(NULL) /* failure for row */

		for (int z = 0; z < width; z++)
		{
			grid[i][z] = 0;
		} 
	}
	