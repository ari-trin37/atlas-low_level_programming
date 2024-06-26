#include "main.h"

/**
* _puts_recursion - printing a string followed with new line.
* @s: our variable
*
* return: printing string.
*/

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);
}