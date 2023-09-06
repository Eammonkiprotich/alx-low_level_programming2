#include "main.h"

/**
 * _strcpy - copies a string from src to dst
 * @dest: destination
 * @src: source
 *
 * Return: value of the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while(*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
