#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: An input letter.
 * Return: 1 or 0 in otherwise.
 **/
int _isalpha(int c)
{
	char min, may;
	int letra = 0;

	for (min = 'a'; min <= 'z'; min++)
	{
		for (may = 'A'; may <= 'Z'; may++)
		{
			if (c == min || c == may)
				letra = 1;
		}
	}
	return (letra);
}
