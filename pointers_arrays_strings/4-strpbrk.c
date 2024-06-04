#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to s.
 * @s: para one
 * @b: para two
 * @n: para three
 * 
 * Return: returns pointer to memory area s.
 */

 char *_strpbrk(char *s, char *accept)
 {
 while (*s != '\0') {
        char *a = accept;

        
        while (*a != '\0') {
            
            if (*s == *a) {
                return s;
            }
            a++;
        }

        s++;
    }

    return NULL;
}
