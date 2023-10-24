#include "main.h"
#include <stdio.h>

/**
 * print_array - print the arrays of an integers
 * @a: the pointer to printhe there arrays
 * @n: number of arrays
 */

void print_array(int *a, int n)
{
	int tab;

	for (tab = 0; tab < n; tab++)
	{
		printf("%d", a[tab]);

		if (tab < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
