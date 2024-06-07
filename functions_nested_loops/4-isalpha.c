#include "main.h"
/**
* _isalpha - function 
* @c : variable
*
* Return : returns one, c is a letter, lower or uppercase.
*/

int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
}
