#include "main.h"

/**
 * print_rev - print the string of the pointer in reverse,
 * followed by a new line
 * @s: pointer to print in reverse
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
