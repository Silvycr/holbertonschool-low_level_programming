#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: Always 0.
 **/
int main(void)
{
	int z;
	long int a, b, c;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (z = 0; z < 48; z++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
