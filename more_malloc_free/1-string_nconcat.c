#include "main.h"
/**
 * string_nconcat - concat - chain link - easy way to remember that is connects two strings.
 * s1: connecting to s2.
 * s2: 2nd string. 
 * @n: # of bytes 
 *
 * Return: NULL for failure / 
 */

 char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = ""; /* empty string */
	if (s2 == NULL)
		s2 = ""; /* empty string */
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	concat = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
	concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat); }
