#include "dog.h"
/**
 * free_dog - free-ing / deallocating memory.
 * @d: what we are free-ing (dog)
 *
 * Return: dog (or 'd')
 */

void free_dog(dog_t *d)
{
	if (d != NULL) /* check if 'd' is not = to null */
	{
		free(d->name); /* allocate new memory for name */
	}

	if (d->owner != NULL) /* allocate new memory for owner */
	{
		free(d->owner);
	}

	free(d); /* free allocated memory for structure, dog_t */
}

