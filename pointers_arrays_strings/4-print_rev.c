#include "main.h"

/**
 * print_rev - print the string of the pointer in reverse,
 * followed by a new line
 * @s: pointer to print in reverse
 */

void print_rev(char *s)
{
	int tab = 0;

	while (s[tab] != '\0')
	{
		tab++;
	}
	for (tab = tab - 1; tab >= 0; s--)
	{
		_putchar(s[tab]);
	}
	_putchar('\n');
}
