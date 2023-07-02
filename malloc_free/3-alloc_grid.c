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
	int **sil, a = 0, b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	sil = (int **)malloc(sizeof(int *) * height);
	if (sil == NULL)
		return (NULL);
	for (; a < height; a++)
	{
		sil[a] = (int *)malloc(sizeof(int) * width);
		if (sil[a] == NULL)
			return (NULL);
	}

	for (a = 0; a < height; a++)
		for (; b < width; b++)
			sil[a][b] = 0;
	return (sil);
}
