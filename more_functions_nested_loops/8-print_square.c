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
		for (col = 0; col < size; col++)
		{
			for (line = 0; line < size; line++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar(' ');
	}
}
