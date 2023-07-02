#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer.
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int a;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (a = 0; a < height; ++a)
	{
		*(array + a) = malloc(sizeof(int) * width);
		if (!(*(array + a)))
		{
			while (a >= 0)
			{
				free(*(array + a));
				--a;
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
