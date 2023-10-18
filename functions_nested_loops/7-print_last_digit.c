#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @r: entry to check
 *
 * Return: Always 0
 */

int print_last_digit(int r)
{
	int last_digit = r % 10;
	{
		_putchar(last_digit + '0');
	}

	return (0);
}
