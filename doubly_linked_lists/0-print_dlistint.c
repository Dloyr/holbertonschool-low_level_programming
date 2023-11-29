#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - print the value of the double linked list
 * @h: it is the linked list create from the dlistint_t
 * Return: length
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}