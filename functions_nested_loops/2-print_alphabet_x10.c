#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 */

void print_alphabet_x10(void)
{
	char az, n;

	for (n = 1; n <= 10; n++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		{
			_putchar('\n');
		}
	}
}
