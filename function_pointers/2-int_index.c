#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: it's the pointer containing value
 * @size: size of array
 * @cmp: pointer to the function to compare values
 * Return: -1 or contain of cmp(array[index])
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}

	return (-1);
}
