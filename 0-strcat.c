#include "main.h"

/**
 * _strcat - append src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while(*(dest + i))
		i++;
	while(
