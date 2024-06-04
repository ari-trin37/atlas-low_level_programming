#include "main.h"
/**
* _memset - fills first n bytes of memory area pointed to s.
* @s: para one
* @b: para two
* @n: para three
*
* Return: returns pointer to memory area s.
*/

char *_strstr(char *haystack, char *needle)

{
 if (*needle == '\0')
  {
   return (haystack);
  }
   while (*haystack != '\0')
  {
   	char *h = haystack;
    char *n = needle;

    while (*h != '\0' && *n != '\0' && *h == *n)
				{
    h++;
    n++;
    }
     if (*n == '\0') 
     {
     return haystack;
     }

     haystack++;
  }

  return (NULL);
}
