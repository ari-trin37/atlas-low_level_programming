#include "main.h"
/**
 * _strdup - returns a pointer to a new string, dup. of str string.
 * @str: 1st parameter / string
 *
 * Return: NULL if str = NULL
 **/

char *_strdup(char *str)
{
	if (str == NULL) /** null-terminated string? **/
	{
		return(NULL); 
	}

	char length = 0;
	char y;

	while (str[length] != '\0') /* calculating length of string */
	{
		 length++;
	}

	char *duplicate = malloc((length + 1) * sizeof(char)); 
	/* allocate memory 4 duplicate string */

	if (duplicate == NULL)
	{
		return(NULL);
	}
	/* check to see possible mem-alloc failed */

	for (y = 0; y <= length; y++)
	{
		duplicate[y] = str[y]; 
	}
	/* copy string to new all-mem */
	return(duplicate);
}
