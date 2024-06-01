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
:w
	while(dest[x] != '/o')
	{	
		x++;
	}
	while(src[i] != '/o')
	{
		dest[i + x] = src[i];
		i++;
	}
	dest[i + x] = '/o';
	return(dest);
}
