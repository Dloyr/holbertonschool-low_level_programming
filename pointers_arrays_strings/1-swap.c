#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}
