#include "main.h"
/**
 * string_toupper - function name
 * @char * - para one
 *
 * Return: nothing
 */

char *string_toupper(char *)
{
    if (char >= 'a' && char <= 'z') {
        return char - ('a' - 'A');
    }
    return char;
}