#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to convert
 * Return: Always 0
 */

int _atoi(char *s)
{
	int i;

	for ( i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
