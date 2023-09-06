#include "main.h"

/**
 * _atoi - converts a string to an integer
 * s: string containing integer
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;

	while(*(s + i))
	{
		if (*(s + i) >= '0' && *(s + i) <= 9)
		{

