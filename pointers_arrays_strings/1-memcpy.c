#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to s.
 * @dest: desination, returning a pointer.
 * @src: char source
 * @n: number 3
 * 
 * Return: returns pointer to memory area s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;


    while (n--)
        *dest++ = *src++;
    

    return original_dest;
}
