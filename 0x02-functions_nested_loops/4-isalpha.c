#include "main.h"

/**
 * _isalpha - checks if c is lower case or uppercase
 * @c: the character to be checked
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
