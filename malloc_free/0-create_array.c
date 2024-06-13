#include "main.h"
/**
 * create_array - function / 
 * @size: 1st para.
 * @c: 2nd para/variable
 * 
 * Return: NULL if size is 0, or returns pointer to array.
 **/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{ 
		return(NULL);
	}

