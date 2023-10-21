#include "main.h"

/**
 * print_diagonal -  print \ in the terminal
 *
 * @n: number of \
 */

void print_diagonal(int n)
{
        int diago;
	int space;

        if (n > 0)
        {
		for (diago = 0; diago < n; diago++)
		{
			for (space = 0; space < diago; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
        else
        {
                _putchar('\n');
        }
}
