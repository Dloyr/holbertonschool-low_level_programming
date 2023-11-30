#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: start of the linked list
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
