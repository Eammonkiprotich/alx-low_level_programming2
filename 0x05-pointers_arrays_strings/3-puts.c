#include "main.h"

/**
 * _puts - prints a string followed by a new line
 */
void _puts(char *str)
{
	int i = 0;
	char tmp;

	while (*(srt + i) != '\0')
	{
		tmp = *(str + i);
		_putchar(tmp);
		i++;
	}
	_putchar('\n');
}
