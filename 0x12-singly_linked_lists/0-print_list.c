#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: ...
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
