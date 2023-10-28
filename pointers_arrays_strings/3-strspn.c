#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: string to analyze
*@accept: string contain the bytes to find in s
*Return: value of compteur
*/

unsigned int _strspn(char *s, char *accept)
{
	int compteur = 0;

	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
		{
			compteur++;
		}
		else
		{
			break;
		}
		s++;
		accept++;
	}
	return (compteur);
}
