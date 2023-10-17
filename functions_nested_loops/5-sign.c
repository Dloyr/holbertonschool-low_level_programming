#include "main.h"

/**
 * print_sign - print + and return 1 if is positive, 0 and 0 if is equal to 0
 * , - and -1 if is negative
 *
 * @n: variable to check
 *
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
