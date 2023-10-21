#include "main.h"

/**
 * print_line - print a straight line if n > 0, follow
 * by a new line. Or else just follow by a new line
 *
 * @n: variable to check
 */

void print_line(int n)
{
	int line;

	if ( n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
