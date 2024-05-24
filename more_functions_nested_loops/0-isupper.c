#include "main.h"

/**
 * _isupper - this is the function name.
 * @c: checked if uppercase.
 *
 * Return: returned zero for uppercase character.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
