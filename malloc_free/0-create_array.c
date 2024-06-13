#include "main.h"
/**
 * create_array - creating array w/ malloc
 * @size: 1st para.
 * @c: 2nd para/variable/
 *
 * Return: NULL if size is 0, or returns pointer to array.
 **/


char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array = NULL; /* declare here to not mix declares and code */

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char)); /* initialize after size check */

	if (array == NULL)
	{
		return (NULL);
	}

	{

		for (x = 0; x < size; x++)
		{
			array[x] = c;
		}

	}

	{
		return (array);
	}
}
