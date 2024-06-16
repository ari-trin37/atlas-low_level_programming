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

	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	unsigned int concat_len = len1 = ((n >= len2) ? len2 : n); /* determine actual length */

	char *result = (char *)malloc(concat_len + 1); /* +1 for null-terminator */
	if (result == NULL) /* mem. allocation failure */
		return(NULL);
}
