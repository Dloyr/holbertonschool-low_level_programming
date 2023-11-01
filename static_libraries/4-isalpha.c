#include "main.h"

/**
 * _isalpha - return is 1 if we have a letter or 0 with otherwise
 *
 * @c: is variable to check
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
