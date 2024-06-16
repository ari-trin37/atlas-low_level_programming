#include "main.h"
/**
 * malloc_checked -creating function that allocates memory
 * @min: variable #1 / the min amount of value.
 * @max: variable #2, the max amount of value.
 *
 * Return: returns pointer to the allocated memory.
 **/

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
	   return (NULL);
	}
	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
