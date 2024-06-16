#include "main.h"
#include "string.h"
/**
 * string_nconcat - function that links two strings.
 * @s1: 1st string 
 * @s2: 2nd string / will contain s1.
 * @n: variable n / # of bytes
 *
 * Return: NULL or empty.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL) s1 = ""; /* treating NULL as empty string */

	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);

	unsigned int concat_len = len_s1 = ((n >= len_s2) ? len_s2 : n); /* determine actual length */

	char *result = (char *)malloc(concat_len + 1); /* +1 for null-terminator */

	if (result == NULL) /* mem. allocation failure */
	{
		return (NULL);
	}

	strcpy(result, s1); /* copies s1 into result */

	strncat(result, s2, n); 

	return (result); 



}