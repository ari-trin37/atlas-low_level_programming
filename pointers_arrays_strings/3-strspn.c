#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to s.
 * @s: para one
 * @b: para two
 * @n: para three
 * 
 * Return: returns pointer to memory area s.
 */

unsigned int _strspn(char *s, char *accept)

{
    unsigned int count = 0;
    int found = 0;
    while (*s != '\0') {
        char *a = accept;
        found = 0;
        while (*a != '\0') {
            if (*s == *a) {
                found = 1;
                break;
            }
            a++;
        }
        if (found) {
            count++;
        } else {
            break;
        }
        s++;
    }
    return count;
}
