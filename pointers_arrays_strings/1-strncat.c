#include "main.h"
/**
* _strncat - concatenates two strings
* @dest : destination to a different world
* @src : source again
* @n : variable
*
* Return : I'm doing my best.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[i + x] = src [i];
		i++;
	}
	dest[i + x] = '\0';
	return (dest);
}
