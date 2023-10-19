#include "main.h"

/**
 * print_numbers - print 0 to 9, followed by a new line
 */

void print_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}

	_putchar('\n');
}
