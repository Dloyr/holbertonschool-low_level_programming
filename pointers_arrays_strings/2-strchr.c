#include "main.h"

/**
*_strchr - locates a character in a string
*@s: pointer s
*@c: character to locate
*Return: value of s or NULL
*/

char *_strchr(char *s, char c)
{
	int i, length;
	
	for (length = 0; length != '\0'; length++)
	;
	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (0);
}
