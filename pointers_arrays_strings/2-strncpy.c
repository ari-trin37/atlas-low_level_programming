#include "main.h"
/**
 * _strncpy - here is the function
 * @dest : first para
 * @src : second para
 * @n : third para
 *
 * Return : return somethin'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int i = 0;
	
	while (x < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return(dest);
}
