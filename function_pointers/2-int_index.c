#include "function_pointers.h"
/**
 * int_index - if no element matches cmp func., return -1. otherwise, 0.
 * @array: symbolizes first pointer of array.
 * @size: # of elements in array
 * @cmp: function that takes 'int' as para, returns int.
 *
 * Return: cmp doesn't return 0; if no element matches, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL || size <= 0)
    	{
			return(-1);
    	}

    for (i = 0; i < size; i++)
        if (cmp(array[i]) != 0)
		{
            return(i);
        }

    return -1;
}
