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

	while (s1[y] != '\0')
	{
		if(s1[y] != s2[y])
		{
			return(0);
		}

		y++;
	}

	{
	if (s2[y + 1] != '\0')
	}

			return(s1 - s2);
}
