#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: lines.
 * Return: none
 **/
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = size - 1; y > x; y++)
		{
			_putchar(' ');
		}
		for (z = 0; z <= y; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
