#include "main.h"

/**
 * print_square - print square
 * @size: size of square
 */

void print_square(int size)
{
	int line, col;

	if (size > 0)
	{
		for (line = 0; line >= size; line++)
		{
			for (col = 0; col <= size; col++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar(' ');
	}
}
