#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free the linked list
 * @head: the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
