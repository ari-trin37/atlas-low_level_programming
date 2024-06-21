#include "dog.h"
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
	if (name == NULL || owner == NULL || age == NULL)
	{
		return(NULL);
	}

	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t)); /* allocates memory for the dog_t structure */
	if (newDog == NULL)
	{
		return(NULL); /* returns NULL if malloc fails */
	}

	newDog->name = (char *)malloc(strlen(name) + 1); // +1 for null terminator

	if (newDog->name == NULL) 
	{
        free(newDog);
        {
			return(NULL); /* returns NULL if malloc fails */
    	}

	strcpy(newDog->name, name);

    newDog->owner = (char *)malloc(strlen(owner) + 1); /* null terminator (+1) */
    if (newDog->owner == NULL)
	{
        free(newDog->name);
        free(newDog);
	{
		return(NULL); /* returns NULL if malloc fails */
	}

    }
    strcpy(newDog->owner, owner);

    newDog->age = age; /* set dog age */

	return(newDog);
}

