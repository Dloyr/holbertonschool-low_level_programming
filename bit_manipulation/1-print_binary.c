#include "main.h"
/**
 * print_binary - print the binary value of a integer
 * @n: the integer
*/
void print_binary(unsigned long int n)
{
	int index;
	
	for (index = 7; index >= 0; index--)
	{
		if ((n >> index) & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
