#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1 : para one
 * @s2 : para two
 *
 * Return : can be less than, greater than, or equal to.
 */

int _strcmp(char *s1, char *s2)
{
	int y = 0;
	for (;s1[y] != '\0' && s2[y] != '\0'; s1++, s2++)
	if (s1[y] != s2[y]) {
			return (s1[y] - s1[1]); }
	 		return(0); 
}
