#include "main.h"
#include <stdio.h>

/**
*print_diagsums - print sum tow diagonals of a square
*@a: values of the square
*@size: size of the square
*/

void print_diagsums(int *a, int size)
{
	int index, sommea = 0, sommeb = 0;

	for (index = 0; index < size; index++)
	{
		sommea += a[index * size + index];
		sommeb += a[index * size + (size - 1 - index)];
	}
	printf("%d, ", sommea);
	printf("%d\n", sommeb);
}
