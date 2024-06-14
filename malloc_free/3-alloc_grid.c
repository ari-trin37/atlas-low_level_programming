#include "main.h"
/**
 * alloc_grid - returns pointer to 2 dimensional array of int.'s
 * @width: width 
 * @heigth: height
 * Return: NULL due to w/h being 0.
 * 
 **/

int **alloc_grid(int width, int height)
{
    int **grid;
    int i, x, z;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL; // Memory allocation failed

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            // Free previously allocated memory and return NULL on failure
            for (x = 0; x < i; x++)
                free(grid[x]);
            free(grid);
            return NULL;
        }

        for (z = 0; z < width; z++)
        {
            grid[i][z] = 0;
        }
    }

    return grid;
}
