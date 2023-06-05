#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: ...
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int n;
	listint_t *a;

	if (!h || !*h)
	return (0);

	while (*h)
	{
		n = *h - (*h)->next;
		if (n > 0)
		{
			a = (*h)->next;
			free(*h);
			*h = a;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}
