#include "main.h"

/**
 * times_table - Print the 9 times tables, starting with 0
 */

void times_table(void)
{
	int ligne, colonne, mul;
	{
		for (ligne = 0; ligne <= 9; ligne++)
		{
			for (colonne = 0; colonne <= 9; colonne++)
			{
				mul = ligne * colonne;
				if (colonne == 0)
				{
					_putchar(mul + '0');
				}
				else if (mul <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
