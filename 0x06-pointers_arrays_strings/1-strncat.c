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
	int dest_len = 0;
	int src_index = 0;

	while (dest[dest_len])
		dest_len++;

	int i = dest_len;

	while (n > 0 && src[src_index])
	{
		dest[i] = src[src_index];
		i++;
		src_index++;
		n--;
	}
	return (dest);
}
