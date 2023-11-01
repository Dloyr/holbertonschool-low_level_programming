#include "main.h"

/**
 * _abs - print a function that computes the absolute value
 * of ani integer
 *
 * @r: variable to check
 *
 * Return: Always 0
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
		return (0);
}
