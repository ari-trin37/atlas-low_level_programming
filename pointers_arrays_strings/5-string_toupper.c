#include "main.h"
/**
 * string_toupper - function
 * char * : parameter
 *
 * Return : changing lowercase letters of string to uppercase.
 */

char *string_toupper(char *)
{
	char *orig = str;
	while (*str) 
	{	*str = toupper((unsigned char)*str);
		str++;
}	return orig;

}
