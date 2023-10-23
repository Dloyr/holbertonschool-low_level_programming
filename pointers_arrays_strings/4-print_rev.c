#include "main.h"

/**
 * print_rev - print the string of the pointer in reverse,
 * followed by a new line
 * @s: pointer to print in reverse
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar (*s);
		s--;
	}
}
