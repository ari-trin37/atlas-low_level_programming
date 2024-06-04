#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to s.
 * @s: para one
 * @b: para two
 * @n: para three
 * 
 * Return: returns pointer to memory area s.
 */

 char *_memset(char *s, char b, unsigned int n)
 {
    char *p = s;
    while (n--) {
        *p++ = b;
    }
    return s;
}

