#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: ...
 *
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *i;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	i = (*head)->next;
	free(*head);
	*head = i;

	return (n);
}
