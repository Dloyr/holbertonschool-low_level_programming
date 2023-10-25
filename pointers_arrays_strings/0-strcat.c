#include "main.h"

/**
* *_strcat - concatenate two strings
*@dest: first pointer
*@src: second pointer
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i, length;
	length = 0;

	for (length = 0; dest[length] != '\0'; length++)
	;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
