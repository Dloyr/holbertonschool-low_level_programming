#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: start of the linked list
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->str);
			free(head);
		}
	}
}
