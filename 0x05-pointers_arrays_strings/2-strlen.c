#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 */
int _strlen(char *s)
{
	int i;
	while(i = 0 && *(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
