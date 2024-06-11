#include "main.h"
/**
* _strlen_recursion - fucntion name / returning length of string.
* @s: variable given, includes a pointer. string - calculating length.
*
* return : returning the length of a string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}

/* testing note option */
/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-*/
