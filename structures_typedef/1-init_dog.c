#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: 
 * @name:
 * @age:
 * @owner:
 *
 * Return: doesn't return anything.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
