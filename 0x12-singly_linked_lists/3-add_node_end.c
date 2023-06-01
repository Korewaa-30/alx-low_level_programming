#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: ...
 * @str: ...
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *i, *j;
	size_t n;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	i->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	i->len = n;
	i->next = NULL;
	j = *head;

	if (j == NULL)
	{
		*head = i;
	}
	else
	{
		while (j->next != NULL)
			j = j->next;
		j->next = i;
	}
	return (*head);
}
