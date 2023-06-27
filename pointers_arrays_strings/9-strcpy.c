#include "main.h"
/**
 * _strcpy - Copies string pointed to by src
 * @dest: Array being copied to
 * @src: String to be copied
 * Return: Print to dest
 **/
char *_strcpy(char *dest, char *src)
{
	char *al = dest;

	while (*src)
		*dest++ = *src++;
	return (al);
}
