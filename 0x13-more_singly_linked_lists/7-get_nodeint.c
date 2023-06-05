#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: ...
 * @index: ...
 * Return: the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j = head;

	while (j && i < index)
	{
		j = j->next;
		i++;
	}

	return (j ? j : NULL);
}
