#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: input string.
 **/
void puts_half(char *str)
{
	int contar = 0, x;

	while (contar >= 0)
	{
		if (str[contar] == '\0')
			break;
		contar++;
	}

	if (contar % 2 == 1)
		x = contar / 2;
	else
		x = (contar - 1) / 2;

	for (x++; x < count; x++)
		_putchar(str[x]);
	_putchar('\n');
}
