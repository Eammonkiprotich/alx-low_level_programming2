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
		_putchar(*(str + i));
		if (*(str + i) == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
