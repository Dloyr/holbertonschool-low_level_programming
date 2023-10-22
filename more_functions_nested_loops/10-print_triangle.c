#include "main.h"

/**
 * print_triangle - print triangle in terminal
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for ( y = 1; y <= size -x; y++)	
		{
			_putchar(' ');
		}
		for (y = 1; y <= x; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
