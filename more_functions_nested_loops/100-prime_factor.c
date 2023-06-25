#include <stdio.h>
/**
 * main - prints prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int y, z;

	y = 612852475143;
	for (z = 2; z <= y; z++)
	{
		if (y % z == 0)
		{
			y /= z;
			z--;
		}
	}
	printf("%ld\n", z);
	return (0);
}
