#include "main.h"
/**
 * print_most_numbers - Function that prints the numbers
 * Return: Always 0
 **/
void print_most_numbers(void)
{
	int al = '0';

	for (; al <= '9'; al++)
	{
		if (al != '2' && al != '4')
			_putchar(al);
	}
	_putchar('\n');
}
