#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns pointer
 * @str: String to be copied
 * Return: Pointer to new string identical to str, NULL if str = NULL
 **/
char *_strdup(char *str)
{
	char *x;
	int a, lon;

	a = 0;
	if (!str)
		return (NULL);
	while (*(str + a))
		++a;
	lon = a;
	x = malloc(sizeof(char) * (lon + 1));
	if (!x)
		return (NULL);
	for (a = 0; a <= lon; ++a)
		*(x + a) = *(str + a);
	return (x);
}
