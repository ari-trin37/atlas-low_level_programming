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
        ;
    }
    else
    {

        _print_rev_recursion(s + 1);
        _putchar(*s)
    }
    if (*s != '/0')  
 _putchar(*s);
}
        