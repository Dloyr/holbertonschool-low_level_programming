#include "main.h"

/**
*string_toupper - changes all lowercase letters to uppercase
*@upper: pointer to modify
*Return: Value of upper
*/

char *string_toupper(char *upper)
{
	int i;

	for (i = 0; upper[i] != '\0'; i++)
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
		{
			upper[i] -= 32;
		}
	}
	return (upper);
}
