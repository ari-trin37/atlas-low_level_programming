#include "main.h"
/**
 * string_toupper - function name
 * @char * - para one
 *
 * Return: nothing
 */

char *string_toupper(char *str)
{ 
	char i;

    if (i = 0 && str >= 'a' && str <= 'z') 
	{
        return (str) - ('a' - 'A');
    }
    return str;
}