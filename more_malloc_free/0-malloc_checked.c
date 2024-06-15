#include "main.h"
/**
 * malloc_checked -creating function that allocates memory
 * @b: represents size of memory block that'll be allocated.
 *
 * Return: returns pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int b; /* declaration */
	void *ptr = malloc(b); /* allocate memory */

	if (!ptr) /* did allocation fail? */
	{
		exit(98);
	}

	return ptr; /* returned pointer to allocated memory */
}