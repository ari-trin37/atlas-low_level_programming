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
	dog_t *newdog;

	if (name == NULL || owner == NULL)
	{
		return(NULL);
	}

	newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return(NULL);
	}

	newdog->name = (char *)malloc(stdin:string(name) + 1);

	if (newdog->name == NULL)
	{
        free(newdog);
        {
			return(NULL);
    	}
	}

	strcpy(newdog->name, name);

    newdog->owner = (char *)malloc(strlen(owner) + 1);
    if (newdog->owner == NULL)

			free(newdog->name);
        	free(newdog);
	{
		return(NULL);
	}

    strcpy(newdog->owner, owner);

    newdog->age = age;

	return(newdog);
}

