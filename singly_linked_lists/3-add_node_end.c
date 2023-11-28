#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add a new node at the end
 * @head: the beginning of the list
 * @str: the string to duplice for the new node
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (*head);
}
