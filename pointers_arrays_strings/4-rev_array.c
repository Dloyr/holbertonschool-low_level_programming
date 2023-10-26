#include "main.h"

/**
*reverse_array - reverse a array compose of integer
*@a: pointer to reverse
*@n : length of array
*/

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
