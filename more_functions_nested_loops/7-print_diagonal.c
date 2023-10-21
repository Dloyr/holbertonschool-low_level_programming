#include "main.h"

/**
 * print_diagonal -  print \ in the terminal
 *
 * @n: number of \
 */

void print_diagonal(int n)
{
        int diago;

        if (n > 0)
        {
		for (diago = 0; diago < n; diago++)
		{
			_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
        else
        {
                _putchar('\n');
        }
}
