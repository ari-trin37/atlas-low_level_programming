#include "main.h"
/**
 * _strncpy - here is the function
 * @dest : first para
 * @src : second para
 * @n : third para
 *
 * Return : return somethin'
 */
/*
*
*/char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
