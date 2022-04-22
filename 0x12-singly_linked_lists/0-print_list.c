#include "list.h"
#include <stdio.h>
/**
 * print_list - print all numbers alements of a list_t list
 * @h: linked list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d]  %s\n", current->len,
				current->str != NULL ? current->str : "(nil)");
		current = current->next;
		i++;
	 }
	return (1);
}		
