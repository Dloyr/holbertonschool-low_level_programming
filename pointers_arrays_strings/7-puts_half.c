#include "main.h"

/**
 * puts_half - print the second half of the string of pointer
 * @str: pointer to use
 */

void puts_half(char *str)
{
	int tab, length, n;

	tab = 0;
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		for (tab = length / 2; str[tab] != '\0'; tab++)
		{
			_putchar(str[tab]);
		}
	}
	else
	{
		for (n = (length - 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
