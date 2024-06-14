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
	char y;
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

	for (char = 0; char <= length; i++)
	{
		duplicate[char] = str[char]; 
	}
	/* copy string to new all-mem */

	return(duplicate);
}
