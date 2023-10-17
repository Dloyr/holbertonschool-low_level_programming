#include <stdio.h>

/**
 * main - print number 0 to 9 with a \",\" between numbers.
 * Followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)

	{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
	}
	}
	{
		putchar('\n');
	}

	return (0);
}
