#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: it's the pointer create from the singly linked list
 * Return: length
*/
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
