#include <stdio.h>
/**
 * main - Prints the number of arguments
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0.
 **/
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
