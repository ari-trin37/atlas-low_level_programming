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

	while (*s1 != '\0' && *s2 != '\0')
			s1++, s2++
		if(*s1 != *s2) {
			return (s1 - s2); }
	 		return(0); 
}
