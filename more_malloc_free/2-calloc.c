#include "main.h"
/**
 * _calloc - allocates memory for an array.
 *  nnemb: variable
 * @size: is = to nnemb, = to 0
 *
 * Return: returns pointer to allocated memory. or NULL
 */

void *_calloc(unsigned int nnemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size, i;

	if (nnemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nnemb * size;

	if (size != 0 && total_size / size != nnemb)
	{
		return(NULL);
	}

	ptr = (char *)malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}
	return (void * (ptr));
}
