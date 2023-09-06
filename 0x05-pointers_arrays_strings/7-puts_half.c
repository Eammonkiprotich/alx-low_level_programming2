#include "main.h"

/**
 * puts_half - prints half the string
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;

	while(*(str + i))
	{
		i++;
	}

	if (i % 2 == 0)
	{
		i /=2;
		while(*(str + i))
		{
			_putchar(*(str + i));
			i++;
		}
	}
	else
	{
		i = (i + 1) / 2;
		while(*(str + i))
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
