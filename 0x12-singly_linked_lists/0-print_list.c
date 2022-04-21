#include "lists.h"
#include <stdio.h>

/**
 * size print_li - print all elements in linked list
 * @h: singly linked list to print
 * Return: a certain number of nodes given in the list
 */
size_t print_list(const list_t *h)
{
	size_t f;

	for (f = 0; h; f++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (f);
}

