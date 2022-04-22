#include <stdio.h>
#include "list.h"
#include <stdlib.h>
/**
 * print_list = print all numbers alements of a list_t list
 * @h: songly linked list to print
 * Return number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i =o; h; i++)
	{
		printf("[%d]  %s\n", h->len, h->str;
		 h = h->next
	 }
	return (1);
}		
