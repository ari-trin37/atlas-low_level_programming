#include "main.h"
/**
* _print_rev_recursion - string in reverse.
* @s: our variable.
* return: returning a string in reverse.
*
*/

void _print_rev_recursion(char *s)
{ 
    if (*s == '\0')
    {
        return (0);
    }
    
    _putchar _print_rev_recursion(s + 1);
        return _print_rev_recursion(s);
}