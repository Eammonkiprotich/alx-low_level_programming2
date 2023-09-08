#include "main.h"

/**
 * _strncat - similar to _strcat but prints n bytes from src
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;

	while (n >= 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
		n--;
	}
	return (dest);
}
