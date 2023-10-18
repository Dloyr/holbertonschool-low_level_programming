#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int h, hh, m, mm;

	for (h = 0; h <= 2; h++)
	{
		for (hh = 0; hh <= 9; hh++)
		{
			if ((h <= 1 && hh <= 9) || (m <= 5 && mm <= 9))
			{
				for (m = 0; m <= 5; m++)
				{
					for (mm = 0; mm <= 9; mm++)
					{
						_putchar(h + '0');
						_putchar(hh + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(mm + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
