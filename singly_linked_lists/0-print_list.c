#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print the value of the singly linked list
 * @h: it is the linked list create from the list_t
 * Return: length
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		length++;
		h = h->next;
	}
	return (length);
}
