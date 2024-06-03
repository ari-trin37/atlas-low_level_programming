#include "main.h"
/**
 * string_toupper - function name
 * @char * - para one
 *
 * Return: nothing
 */

char *string_toupper(char *str)
{ 
	str a = 0
	str z = 0

    if (str >= 'a' && str <= 'z') 
	{
        return (str) - ('a' - 'A');
    }
    return (str);
}