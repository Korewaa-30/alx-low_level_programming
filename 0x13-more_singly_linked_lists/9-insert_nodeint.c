#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *insert_nodeint_at_index - inserts a new node
 * @head: ...
 * @idx: ...
 * @n: ...
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a;
	listint_t *b = *head;

	a = malloc(sizeof(listint_t));
	if (!a || !head)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}

	for (i = 0; b && i < idx; i++)
	{
		if (i == idx - 1)
	{
		a->next = b->next;
		b->next = a;
		return (a);
	}
	else
	b = b->next;
	}

	return (NULL);
}
