#include <stdio.h>
/**
 * main - Prints natural numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y += x;
	}
	printf("%d\n", x);

	return (0);
}
