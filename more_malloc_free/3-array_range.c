#include"main.h"
#include<stdlib.h>

/**
 * array_range - create an array of integers
 * @min: it's the minimum bytes of the array
 * @max: it's the maximum bytes
 * Return: NULL or bytes of array
 */

int *array_range(int min, int max)
{
	int index, *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (index = min; index <= max; index++)
		array[index - min] = index;

	return (array);
	free(array);
}
