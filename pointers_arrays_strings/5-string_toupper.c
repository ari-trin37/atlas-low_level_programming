#include "main.h"
/**
 * string_toupper - function name
 * @char * - para one
 *
 * Return: nothing
 */

char *string_toupper(char *)
{
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    return ch;
}