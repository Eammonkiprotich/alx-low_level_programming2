#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: src string
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n > && *(src + i))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
