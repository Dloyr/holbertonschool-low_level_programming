#include "main.h"

/**
 * print_most_numbers - print 0 to 9 without 2 and 4,
 * followed by a new line
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		if (numbers != '2' && numbers != '4')

			_putchar(numbers);
	}
	_putchar('\n');
}
