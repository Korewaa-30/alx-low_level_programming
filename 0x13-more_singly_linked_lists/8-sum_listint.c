#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: ...
 *
 * Return: sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i = head;

	while (i)
	{
		sum += i->n;
		i = i->next;
	}

	return (sum);
}
