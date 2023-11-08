#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size  of the memory to allocate
 * Return: pointeur
 */

void *malloc_checked(unsigned int b)
{
	void *pointeur;

	pointeur = malloc(sizeof(unsigned int) * b);

	if (pointeur == NULL)
	{
		exit(98);
	}
	return (pointeur);
}
