#include "main.h"
/**
 * flip_bits -  flip bits from a number to another
 * @n: first number
 * @m: second number
 * Return: count
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
