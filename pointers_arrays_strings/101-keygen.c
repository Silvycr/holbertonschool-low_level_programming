#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: Zero Always.
 **/
int main(void)
{
	int x = 0, y = 0;
	time_t z;

	srand((unsigned int) time(&z));
	while (y < 2772)
	{
		x = rand() % 128;
		if ((y + x) > 2772)
			break;
		y = y + x;
		printf("%c", x);
	}
	printf("%c\n", (2772 - x));
	return (0);
}
