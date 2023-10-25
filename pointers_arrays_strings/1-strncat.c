#include "main.h"

/**
* *_strncat - concatenate 2 string with byte
*@dest: destination pointer
*@src: source pointer
*@n: number of bytes
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	for (length = 0; dest[length] != '\0'; length++)
	;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	return (dest);
}
