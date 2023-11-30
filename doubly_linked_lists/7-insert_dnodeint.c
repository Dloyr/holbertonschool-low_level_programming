#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inser new node at the value of index
 * @h: the linked list
 * @idx: it's the index of the new node
 * @n: it's the value of the new node
 * Return: NULL or new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = *h;
	dlistint_t *list = *h;
	unsigned int length = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || list == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (list != NULL && length < idx - 1)
	{
		list = list->next;
		length++;
	}

	new->next = list->next;
	new->prev = list->prev;

	list->next->prev = new;
	list->next = new;

	if (list->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	return (new);
}
