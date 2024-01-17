#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: the array to search in
 * @size: size of the array
 * @value: value to search
 * Return: the index of the value or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = 0, index = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);

			if (index < right)
				printf(", ");
		}
		printf("\n");

		middle = (left + right) / 2;

		if (value == array[middle])
			return (middle);
		else if (value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
