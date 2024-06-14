#include "main.h"
/**
 * _strdup - returns a pointer to a new string, dup. of str string.
 * @str: 1st parameter / string
 *
 * Return: NULL if str = NULL
 **/

char *_strdup(char *str)
{
	char *duplicate = NULL;
	int length = 0;
	int i;

	if (str == NULL) /** null-terminated string? **/
	{
		return(NULL); 
	}

	while (str[length] != '\0') /* calculating length of string */
	{
		 length++;
	}

	duplicate = malloc((length + 1) * sizeof(char)); 
	/* allocate memory 4 duplicate string */

	if (duplicate == NULL)
	{
		return(NULL);
	}
	/* check to see possible mem-alloc failed */

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	/* copy string to new all-mem */

	return(duplicate);
}
