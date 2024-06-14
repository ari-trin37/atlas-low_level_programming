#include "main.h"
/**
 * str_concat - linking two strings together.
 * @s1: 1st var. / will connect with string 2.
 * @s2: 2nd var. / in connection w/ s1.
 *
 * Return: empty string or NULL
 *
 **/

char *str_concat(char *s1, char *s2) /*initialized & declared*/
{
	int len_s1 = 0;
	int len_s2 = 0;
	char *result = NULL;
	int i;
	int x;

	if (s1 == NULL) /* s1/s2 = N byte? | using as empty string */
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0') /* s1 not equal to null */
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return(NULL); /* if failed, returns NULL */
	}

	for (i = 0; i < len_s1; i++) /* copy contents from both strings */
	{
		result[i] = s1[i];
	}

	for (x = 0; x < len_s2; x++)
	{
		result[i + j] = s2[j];
	}

	{
		result[i + j] = '\0';
	}

	return result; /* needs to return null, null-termination */
}
