#include <stdio.h>

/**
 * main - print the alphabet in reverse, followed by a new line
 *
 * Result: Always 0
 */

int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)

	{
		putchar (za);
	}

	putchar ('\n');

	return (0);
}
