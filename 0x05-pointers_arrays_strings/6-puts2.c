#include "main.h"

/**
 * puts2 - prints every other character except every other one
 * @str: string 
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str +));
		i += 2;
	}
	_putchar('\n');
}
