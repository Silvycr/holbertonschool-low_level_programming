#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 **/
void rev_string(char *s)
{
	int contar = 0, y, z;
	char *str, sil;

	while (contar >= 0)
	{
		if (s[contar] == '\0')
			break;
		contar++;
	}
	str = s;

	for (y = 0; y < (contar - 1); y++)
	{
		for (z = y + 1; z > 0; z--)
		{
			sil = *(str + z);
			*(str + z) = *(str + (z - 1));
			*(str + (z - 1)) = sil;
		}
	}
}
