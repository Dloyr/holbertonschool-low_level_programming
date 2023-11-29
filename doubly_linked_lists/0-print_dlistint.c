#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - print the value of the doubly linked list
 * @h: it is the linked list create from the dlistint_t
 * Return: length
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		length++;
		h = h->next;
	}
	return (length);
}
