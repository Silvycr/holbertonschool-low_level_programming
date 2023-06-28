#include <stdio.h>
/**
 * main - Print all arguments it receives
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0.
 **/
int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; ++z)
		printf("%s\n", argv[z]);
	return (0);
}
