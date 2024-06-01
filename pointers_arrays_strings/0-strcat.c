#include "main.h"
/**
 * _strcat : function name
 * @dest: first para
 * @src: second para
 *
 * Return: returning pointer to destination
 */

char *_strcat(char *dest, char *src)
{	
	int x = 0;
	int i = 0;

	while(dest[x] != '\0')
	{	
		x++;
	}
	while(src[i] != '\0')
	{
		dest[i + x] = src[i];
		i++;
	}
	dest[i + x] = '/0';
	return(dest);
}
