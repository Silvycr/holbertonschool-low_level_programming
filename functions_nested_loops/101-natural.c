#include <stdio.h>
/**
 * main - Prints natural numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	int contar = 0;

	for (x = 0; x < 1024; x++)
		if (x % 3 == 0 || x % 5 == 0)
			contar += x;
	printf("%i\n", contar);
	return (0);
}
