#include "main.h"

/**
*_print_rev_recursion - print the string in reverse, flw by a new line
*@s: value of pointer
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
