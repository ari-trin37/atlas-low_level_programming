#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to s.
 * @s: para one
 * @b: para two
 * @n: para three
 *
 * Return: returns pointer to memory area s.
 */

void print_diagsums(int *a, int size)

{
int sum1 = 0;
    int sum2 = 0;
    int i;

    for (i = 0; i < size; i++) 
    {
        int index1 = i * size + i;
        int index2 = (i + 1) * (size - 1);

        sum1 += a[index1];
        sum2 += a[index2];
    }
    printf("Sum of main diagonal: %d\n", sum1);
    printf("Sum of secondary diagonal: %d\n", sum2);
}