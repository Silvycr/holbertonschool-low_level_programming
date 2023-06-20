#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - The last digit
 *
 * Return: zero on success
 */
init main(void)
{
	init n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	init ab = n % 10

	if (ab > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ab);
	}
	if else(ab == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ab);
	}
	if else(ab < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ab);
	}
	return (0);
}
