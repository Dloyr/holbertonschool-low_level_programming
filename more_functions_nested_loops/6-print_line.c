#include "main.h"

/**
 * print_line - print a straight line if n > 0, follow
 * by a new line. Or else just follow by a new line
 *
 * @n: variable to check
 */

void print_line(int n)
{
	n = '_';

	if (n > 0)
	{
		_putchar(n);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
