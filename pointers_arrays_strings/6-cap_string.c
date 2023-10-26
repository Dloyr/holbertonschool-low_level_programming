#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@cap : is a pointer who contain the words
*Return : value of cap
*/
 
char *cap_string(char *cap)
{
	int i;

	for ( i = 0; cap[i] != '\0'; i++)
	{
		if (cap[i] >= 32  && cap[i] <= 63)
		{
			cap[i + 1] -=32;
		}
	}
	return (cap);
}
