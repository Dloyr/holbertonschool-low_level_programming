#include "main.h"

/**
 * *_strcpy - copy the string point to src to dest
 * @dest: pointer to destionation
 * @src: source pointer
 * Return: pointer des
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
