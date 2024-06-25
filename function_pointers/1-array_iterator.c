#include "functions_pointers.h"
#include <stdio>
/**
 * @array: a pointer, starts at array
 * @size: size of array.
 * @action: pointer to a function.
 *
 * Return: returns void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
    for (i = 0; i < size; i++)
    {
		action(array[i]);
    }
}
