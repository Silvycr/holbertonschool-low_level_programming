#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Concatenated string, NULL if empty or fail
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int ln;
	int z = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + z))
		++z;
	ln = z;
	z = 0;
	while (*(s2 + z))
		++z;
	ln += z;
	str = malloc(sizeof(char) * (ln + 1));
	if (!str)
		return (NULL);
	for (z = 0; *s1; ++z)
		*(str + z) = *(s1++);
	for (; z <= ln; ++z)
		*(str + z) = *(s2++);
	return (str);
}
