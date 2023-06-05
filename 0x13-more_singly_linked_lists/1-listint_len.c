#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - prints all the elements of a listint_t list
 * @h: ...
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
