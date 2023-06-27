#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: input string.
 **/
void print_rev(char *s)
{
	int contar = 0;

	while (contar >= 0)
	{
		if (s[contar] == '\0')
			break;
		contar++;
	}

	for (contar--; contar >= 0; contar--)
		_putchar(s[contar]);
	_putchar('\n');
}
