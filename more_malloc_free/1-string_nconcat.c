#include "main.h"
#include "string.h"
#include <stdlib.h>
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

	if (s1 == NULL) 
		s1 = ""; /* empty string */
	if (s2 == NULL)
		s2 = ""; /* empty string */

	size_t len1 = strlen(s1);
	size_t int len2 = strlen(s2);


	size_t total_len = len1 + ((n < len2) ? n : len2) + 1; /* determine actual length */

	char *result = (char *)malloc(concat_len + 1); /* +1 for null-terminator */
	if (result == NULL) /* mem. allocation failure */
		return(NULL);
	
	strcpy(result, s1);

	strncat(result, s2, n);

	return result;
}

// test 
