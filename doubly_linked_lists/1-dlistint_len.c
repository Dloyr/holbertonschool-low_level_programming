#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - number of elements in a doubly linked list
 * @h: it's the pointer create from the doubly linked list
 * Return: length
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
