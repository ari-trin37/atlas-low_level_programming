#include "main.h"
/**
 * string_toupper - function name
 * @char * - para one
 * @s: created new variable
 * Return: nothing
 */

char *string_toupper(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
	if (s[i] >= 'a' && s[i] <= 'z')
	s[i] -= 32;
	i++;

}
return (s);
}
