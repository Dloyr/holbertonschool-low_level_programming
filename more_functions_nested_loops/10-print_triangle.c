#include "main.h"

/**
 * print_triangle - print triangle in terminal
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int x, hashes, space;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{ 
			for (space = size - x; space >= 1; space--)	
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= x; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
