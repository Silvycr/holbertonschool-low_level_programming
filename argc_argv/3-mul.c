#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: argument value
 * Return: 0 or 1 if more than 2 arguments
 **/
int main(int argc, char **argv)
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d\n", z);
		return (0);
	}
}
