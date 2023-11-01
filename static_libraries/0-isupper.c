#include "main.h"

/**
 * _isupper - Return 1 if had a uppercase character, or else 0
 *
 * @c: parameter to check
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
