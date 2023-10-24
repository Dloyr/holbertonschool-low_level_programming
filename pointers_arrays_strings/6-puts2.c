#include "main.h"

/**
 * puts2 - print 2 to 2 the string of the pointer
 * @str: pointer to be print
 */

void puts2(char *str)
{
	int tab = 0;

	while (str[tab] != '\0')
	{
		if (tab % 2 == 0)
		{
			_putchar(str[tab]);
		}
		tab++;
	}
	_putchar('\n');
}
