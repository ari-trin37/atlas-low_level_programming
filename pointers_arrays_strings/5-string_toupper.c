#include "main.h"
/**
 * string_toupper - function
 * char * : parameter
 *
 * Return : changing lowercase letters of string to uppercase.
 */

char *string_toupper(char *str)
{
	char *orig = str;
	while (*str) 
	{	*str = string_toupper((unsigned char)*str);
		str++;
}	return orig;

}
