#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: ...
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}

	head = NULL;
}
