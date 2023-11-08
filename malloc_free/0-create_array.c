#include "main.h"
#include <stdlib.h>

/**
 * create_array - memory allocation to the char c
 * @size: it's the size of the memory to allocate
 * @c:  it's the character using the allocated memory
 * Return: NULL or the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int index;

	if (size != 0)
	{
		array = (char *)malloc(sizeof(char) * size);

		for (index = 0; index < size; index++)
		{
			array[index] = c;
		}
	}
	if (array == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	return (array);
	free(array);
}
