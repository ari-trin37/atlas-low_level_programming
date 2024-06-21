#include "dog.h"
/**
 * print_dog - takes a pointer to a "struct dog" as argument, meaning no value returned.
 * @d: variable // if 'd' is = to NULL, function prints nothing.
 *
 * Return: doesn't return anything due to void.
 */

void print_dog(struct dog *d)
{
    if (d == NULL) 
	{
        return;
    }

    printf("Name: ");
    if (d->name == NULL) 
	{
        printf("(nil)\n");
    } else {
        printf("%s\n", d->name);
    }

    printf("Age: %.6f\n", d->age);

    printf("Owner: ");
    if (d->owner == NULL) {
        printf("(nil)\n");
    } else {
        printf("%s\n", d->owner);
    }
}


