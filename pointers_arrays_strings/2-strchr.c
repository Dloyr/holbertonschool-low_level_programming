#include "main.h"

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
