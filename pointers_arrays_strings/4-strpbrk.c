#include "main.h"
#include <stdio.h>

/**
*_strpbrk - searches a string for any of a set bytes
*@s: pointer
*@accept: second pointer
*Return: s + index - 1 or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int index, indexx;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (indexx = 0; accept[indexx] != '\0'; indexx++)
		{
			if (s[index] == accept[indexx])
			{
				return (s + index);
			}
		}
	}
	return (NULL);
}
