#include <stdio.h>

/**
 * main - print all numbers of base 16 in hexadecimal
 *
 * Return: Always 0
 */

int main(void)
{
	char n, h;

	for (n = '0'; n <= '9'; n++)

{
	putchar (n);
}

	for (h = 'A'; h <= 'F'; h++)
{
	putchar (h);
}
{
	putchar ('\n');
}

	return (0);
	}
