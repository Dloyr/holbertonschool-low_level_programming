#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *
 *  @str: pointer to duplicate
 *  Return: NULL or value of duplicate
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, taille;

	if (str == NULL)
	{
		return (NULL);
	}

	for (taille = 1; str[taille]; taille++)
		continue;

	duplicate = malloc(sizeof(char) * taille);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		duplicate[index] = str[index];
	}
	return (duplicate);
}
