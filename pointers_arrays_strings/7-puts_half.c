#include "main.h"

void puts_half(char *str)
{
	int tab, length = 0;

	while ( *str != '\0')
	{
		length++;
		tab++;
	}
	int n = (length_of_the_string - 1) / 2;
	
	if ( length % 2 == 0)
	{
		_putchar(n);
	}
	_putchar('\n');
}
