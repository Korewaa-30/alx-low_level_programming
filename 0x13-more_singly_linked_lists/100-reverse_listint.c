#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *reverse_listint - reverses a listint_t linked list
 * @head: ...
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = next;
	}

	*head = a;

	return (*head);
}
