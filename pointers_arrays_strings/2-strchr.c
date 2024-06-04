#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to s.
 * @s: para one
 * @c: para two
 * 
 * Return: returns pointer to memory area s.
 */

 char *_strchr(char *s, char c)
 {
  while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return s;
}
