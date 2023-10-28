#include "main.h"

/**
* print_chessboard - print a chessboard
*@a: array
*/

void print_chessboard(char (*a)[8])
{
	int indexa, indexb;

	for (indexa = 0; indexa < 8; indexa++)
	{
		for (indexb = 0; indexb < 8; indexb++)
		{
			_putchar(a[indexa][indexb]);
		}
		_putchar('\n');
	}
}
