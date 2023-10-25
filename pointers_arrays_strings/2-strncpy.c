#include "main.h"

/**
*_strncpy - copie a string
*
*@dest: pointer of destination
*@src: pointer of source
*@n: pointer of number of bytes
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, length;

	for (length = 0; dest[length] != '\0'; length++)
	;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
