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

	char i = length

	while (*char[length] != '\0') /* calculating length of string */
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

	char y;

	for (y = 0; y <= i; y++)
	{
		duplicate[char] = str[y]; 
	}
	/* copy string to new all-mem */

	return(duplicate);
}
