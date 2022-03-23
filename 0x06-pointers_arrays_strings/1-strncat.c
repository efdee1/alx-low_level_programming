#include "main.h"

/**
 * _strncat - Funtion
 * @dest: Destiny
 * @src: Source
 * @n: Variable
 * Return: Destiny
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	j = i;

	for (; n > j; j++)
		dest[j] = '\0';

	return (dest);
}
