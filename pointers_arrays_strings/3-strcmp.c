#include "main.h"

/**
* _strcmp - compares two strings
*@s1: first pointer to compare
*@s2: second pointer to compare
*Return: *s1 - *s2 or 0
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')	
	{
		s1++;
		s2++;
	}
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			return (0);
		}

}	
