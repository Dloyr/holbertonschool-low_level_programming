#include "main.h"

/**
*_strlen_recursion - print the length of the string
*@s: pointer to print his lenght
*Return: 0 or 1 + number of recursion while s =! NULL
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
