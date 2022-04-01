#include "main.h"

/**
 * _strlen - main function.
 * @s: Pointer with the address value.
 * Description: This function takes a pointer to an int as parameter
 *
 * Return: none.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
