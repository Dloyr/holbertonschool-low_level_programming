#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index given of a linked list
 * @head: the linked list
 * @index: index given
 * Return: -1 or 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int index_temp = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		while (temp->next != NULL && index_temp < index)
		{
			temp = temp->next;
			index_temp++;
		}

		if (temp->prev != NULL)
			temp->prev->next = temp->next;

		free(temp);
		return (1);
	}
	return (-1);
}
