#include <stdio.h>

/**
 * main - Prints all single digit numbers on base 10 starting from 0,
 * followed by a new line. Without char
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)

	{
		putchar (num);
	}

	putchar ('\n');

		return (0);
}
