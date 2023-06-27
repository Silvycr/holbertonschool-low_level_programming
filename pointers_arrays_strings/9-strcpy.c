#include "main.h"
/**
 * _strcpy - Copies string pointed to by src
 * @dest: Array being copied to
 * @src: String to be copied
 * Return: Print to dest
 **/
char *_strcpy(char *dest, char *src)
{
	int al;
	int x = 0;

	while (*src++)
		x++;
	al = x;
	for (x = 0; x <= al; x++)
		dest[x] = src[x];
	return (dest);
}
