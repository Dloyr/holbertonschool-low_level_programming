#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - print the node at the index give
 * @head: head of linked list
 * @index: numerous of the node to print
 * Return: head or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int length = 0;

	while (head != NULL)
	{
		if (index == length)
		{
			return (head);
		}
	head = head->next;
	length++;
	}
	return (NULL);
}
