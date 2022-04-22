#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements in a linked
 * @h: linked list singly
 *
 * Return: number of elements of the given list
 */

size_t list_len(const list_t *h)
{
	size_t efdee = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		efdee++;
	}
	return (efdee);
}
