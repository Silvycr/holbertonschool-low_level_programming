#include "main.h"
/**
 * puts2 - Function that prints every other character of a string
 * @str: An input string
 **/
void puts2(char *str)
{
	int al = 0, z = 0;

	while (str[al] != '\0')
		al++;

	al -= 1;

	for (; z <= al; z += 2)
		_putchar(str[z]);

	_putchar('\n');
}
