#include "main.h"

/**
*_strpbrk - searches a string for any of a set bytes
*@s: pointer
*@accept: second pointer 
*Return: s + index - 1 or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (s[index] == accept[index])
			{
				return (s + index - 1);
			}
		}
	}
	return (0);
}
