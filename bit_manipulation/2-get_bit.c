#include "main.h"

/**
 * get_bit - get a value of a bit at a given index
 * @n: integer
 * @index: index of n
 * Return: -1 or value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (index >= sizeof(unsigned long int) * 7)
	{
		return (-1);
	}

	return (bit);
}
