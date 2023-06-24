#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: Input
 * Return: none
 **/
void print_line(int n)
{
	int z = 0;

	if (n > 0)
	{
		for (; z < n; z++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
