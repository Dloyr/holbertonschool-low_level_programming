#include "main.h"
#include <stdio.h>

/**
*print_diagsums - print sum tow diagonals of a square
*@a: values of the square
*@size: size of the square
*/

void print_diagsums(int *a, int size)
{
	int indexa, indexb, somme;

	for (indexa = 0; indexa < size; indexa++)
	{
		for (indexb = 0; indexb < size; indexb++)
		{
			if (indexa == indexb || indexa + indexb == size - 1)
			{
				somme = a[indexa + indexb];
			}
		}
	}
	printf("%d", somme);
}
