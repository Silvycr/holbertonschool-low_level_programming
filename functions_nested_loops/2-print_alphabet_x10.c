#include "main.h"
/**
 * print_alphabet_x10 - Function to print alphabet in lowercase 10 times
 *
 * Return: Always 0.
 **/
void print_alphabet_x10(void)
{
	char ro;
	int si;

	for (si = 0; si < 10; si++)
	{
		for (ro = 'a'; ro <= 'z'; ro++)
		{
			_putchar(ro);
		}
		_putchar('\n');
	}
}
