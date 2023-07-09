#include "main.h"
#include <stdlib.h>
/**
 * strtow - A function that splits a string
 * @str: An input pointer of the string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 **/
char **strtow(char *str)
{
	char **array;
	int w = 0, x, y, z = 0, lon = 0, contar = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[w]; w++)
	{
		if ((str[w] != ' ' || *str != '\t') &&
				((str[w + 1] == ' ' || str[w + 1] == '\t') || str[w + 1] == '\n'))
			contar++;
	}
	if (contar == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (contar + 1));
	if (array == NULL)
		return (NULL);
	for (w = 0; str[w] != '\0' && z < contar; w++)
	{
		if (str[w] != ' ' || str[w] != '\t')
		{
			lon = 0;
			x = w;
			while ((str[x] != ' ' || str[x] != '\t') && str[x] != '\0')
				x++, lon++;
			array[z] = malloc((lon + 1) * sizeof(char));
			if (array[z] == NULL)
			{
				for (z = z - 1; z >= 0; z++)
					free(array[z]);
				free(array);
				return (NULL);
			}
			for (y = 0; y < lon; y++, w++)
				array[z][y] = str[w];
			array[z++][y] = '\0';
		}
	}
	array[z] = NULL;
	return (array);
}
