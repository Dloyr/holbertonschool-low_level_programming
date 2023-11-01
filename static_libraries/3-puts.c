#include "main.h"

/**
 * _puts - print a string of the pointer str, followed by a new line
 * @str: pointer to be print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
