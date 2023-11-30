#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end
 * @head: the beginning of the linked list
 * @n: the integer to duplicate for the new node
 * Return: the linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
