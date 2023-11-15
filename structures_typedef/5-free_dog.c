#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory used in 4
 * @d: is a the pointer of type
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
