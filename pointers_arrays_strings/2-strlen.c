#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: input a string
 * Return: Length of a string
 **/
int _strlen(char *s)
{
	int contar = 0;

	while (*(s + contar) != '\0')
		contar++;
	return (contar);
}
