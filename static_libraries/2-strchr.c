#include "main.h"

/**
*_strchr - locates a character in a string
*@s: pointer s
*@c: character to locate
*Return: value of s or NULL
*/

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (0);
}
