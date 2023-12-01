#include "main.h"
/**
 * print_binary - print the binary value of a integer
 * @n: the integer
*/
void print_binary(unsigned long int n)
{
	int index, length = 0;
	int binary;
	unsigned long int n_copy = n;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (n_copy)
	{
		length++;
		n_copy >>= 1;
	}

	for (index = length - 1; index >= 0; index--)
	{
		binary = (n >> index) & 1;

		if (binary == 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
