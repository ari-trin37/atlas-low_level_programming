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

dog_t *new_dog(char *name, float age, char *owner) {

	dog_t *newdog;
	char name;
	float age;
	char owner;

    if (name == NULL || owner == NULL) {
        return NULL;
    }

    newdog = (dog_t *)malloc(sizeof(dog_t));
    if (newdog == NULL) {
        return NULL;
    }

    // Calculate length of name
    int name_len = 0;
    while (name[name_len] != '\0') {
        name_len++;
    }

    // Allocate memory for newdog->name
    newdog->name = (char *)malloc(name_len + 1);
    if (newdog->name == NULL) {
        free(newdog);
        return NULL;
    }

    // Copy name to newdog->name
    for (int i = 0; i <= name_len; i++) {
        newdog->name[i] = name[i];
    }

    // Calculate length of owner
    int owner_len = 0;
    while (owner[owner_len] != '\0') {
        owner_len++;
    }

    // Allocate memory for newdog->owner
    newdog->owner = (char *)malloc(owner_len + 1);
    if (newdog->owner == NULL) {
        free(newdog->name);
        free(newdog);
        return NULL;
    }

    // Copy owner to newdog->owner
    for (int i = 0; i <= owner_len; i++) {
        newdog->owner[i] = owner[i];
    }

    newdog->age = age;

    return newdog;
}

