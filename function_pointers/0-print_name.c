#include "function_pointers.h"

/**
 * print_name - writing a function that prints a name.
 * @name: name of the function we're printing.
 * @char: passed as arg.
 * @f: function pointed to by 'f' used to print name, letter by letter.
 *
 * Return: return type is void.
 */



void print_name(char *name, void (*f)(char))
	{
		(*f)(name);
	}
