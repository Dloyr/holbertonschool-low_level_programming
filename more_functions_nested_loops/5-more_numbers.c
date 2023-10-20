#include "main.h"

/**
 * more_numbers - print 0 to 14 10x flw by new line
 */

void more_numbers(void)
{
	int numbers, line;

	for (line = 1; line <= 10; line++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			 _putchar(numbers % 10+ '0');

			if ( numbers > 9)
			{
				_putchar(numbers / 10 + '0');
			}
		}
		_putchar('\n');
	}
}
