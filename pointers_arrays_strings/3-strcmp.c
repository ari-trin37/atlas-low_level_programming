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

	while (s1[y] != '\0') {
		if(s1[y] > s2[y]) {:wq!
			return 1;
		} else if (s1[y] < s2[y]) {
			return(-1);
		} else {
		  y++;
		}
    }
		if(s1[y] != '\0') {
		   return -1;
	}   else
		return(0);
}
