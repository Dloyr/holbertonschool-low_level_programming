#include "main.h"

void puts_half(char *str)
{
	int tab, length = 0;
	int n = (length - 1) /2;

	for (tab = 0; str [tab] != '\0'; length++)
	{
		if ( length % 2 == 0)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
