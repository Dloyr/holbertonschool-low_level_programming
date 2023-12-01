#include "main.h"
/**
 * set_bit - set bit to 1 at a given index
 * @n: the integer
 * @index: the value of index given
 * Return: -1 or *n
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 7)
	{
		return (-1);
	}

	*n |= (1 << index);

	return (*n);
}
