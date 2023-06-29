#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int l = 0;

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (l < size)
	{
		a[l] = c;
		l++;
	}
	return (a);
}
