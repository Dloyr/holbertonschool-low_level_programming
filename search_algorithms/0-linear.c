#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: the array to search in
 * @size: size of the array
 * @value: value to search
 * Return: the index of the value or -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (value == array[index])
			return (index);
		index++;
	}
	return (-1);
}
