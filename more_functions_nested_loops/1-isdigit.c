#include "main.h"

/**
 * _isdigit - if digit is between 0 and 9 return is 1, or else 0
 *
 * @c: variable to check
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
