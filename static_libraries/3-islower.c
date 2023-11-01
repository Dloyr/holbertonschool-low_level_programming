#include "main.h"

/**
 * _islower - make return 1 if alphabet is un lowercase or 0 if is uppercase
 *
 * @c: character check
 *
 * Return: 1 or 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
