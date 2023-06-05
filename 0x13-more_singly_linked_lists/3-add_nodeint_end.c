#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - prints all the elements of a listint_t list
 * @head: ...
 * @n: ...
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *i, *j;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
		*head = i;

	else
	{
		j = *head;
		while (j->next != NULL)
			j = j->next;
		j->next = i;
	}
	return (*head);
}
