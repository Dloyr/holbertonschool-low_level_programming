#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: the adress of memory
 * @size: size of the adress
 * Return: NULL or value of pointeur
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pointeur;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointeur = malloc(nmemb * size);

	if (pointeur == NULL)
		return (NULL);

	return (pointeur);
	free(pointeur);
}
