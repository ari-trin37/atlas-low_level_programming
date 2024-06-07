#include "main.h"
/**
* _puts_recursion - printing a string followed with new line.
* @s: our variable  
*
*/

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    _putschar(s);
    _puts_recursion(s + 1);
    return;
}