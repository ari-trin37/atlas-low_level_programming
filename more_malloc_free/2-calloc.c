#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: variable
 * @size: is = to nmemb, = to 0
 *
 * Return: returns pointer to allocated memory. or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
    int *arr;
    unsigned int i, nmemb = 5, size = sizeof(int);

 arr = (int *)_calloc(nmemb, size);
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
	for (i = 0; i < nmemb; i++)
    {
        printf("arr[%u] = %d\n", i, arr[i]);
    }
	free(arr);

    return 0;
}
