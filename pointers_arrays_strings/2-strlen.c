#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: variable to return the length
 *Return: count
 */

int _strlen(char *s)
{
	int number = 0;

	while (*s != '\0')
	{
		number++;
		s++;
	}
	
	return (number);
}
