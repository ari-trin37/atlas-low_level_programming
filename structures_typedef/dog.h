#ifndef STRUCTURE_POINTERS_H
#define STRUCTURE_POINTERS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Short description
 * @name: doggo name
 * @age: doggo age
 * @owner: owner name
 *
 * Description: unsure of what to put.
 */

/* create type def with structure */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
