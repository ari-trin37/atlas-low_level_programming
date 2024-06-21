#include "dog.h"
#include <string.h>
/**
 * new_dog - function that creates new dog.
 * @name: dog name // string
 * @age: age of dog.
 * @owner: owner name // string
 *
 * Return: NULL or 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL) /** checks for null */
	{
		return(NULL);
	}

	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t)); /** creates new memory for dog_t struct. */
	if (newdog == NULL)
	{
		return(NULL); /** returns null if malloc fails */
	}

	newdog->name = (char *)malloc(strlen(name) + 1); /** null terminator (+1) */

	if (newdog->name == NULL)
	{
        free(newdog);
        {
			return(NULL); /** returns null if malloc fails */
    	}
	}

	strcpy(newdog->name, name);

    newDog->owner = (char *)malloc(strlen(owner) + 1); /** null terminator (+1) */
    if (newdog->owner == NULL)

        free(newdog->name);
        free(newdog);
	{
		return(NULL); /** returns null if malloc fails */
	}

    }
    strcpy(newdog->owner, owner);

    newdog->age = age; /** dog age set-up */

	return(newdog);
}

