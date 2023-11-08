#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string with memory allocation
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: empty, NULL or value of s3
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int taille1 = 0, taille2 = 0, taille3, index;

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}

	for (index = 0; s1[index]; index++)
	{
		taille1++;
	}
	for (index = 0; s2[index]; index++)
	{
		taille2++;
	}

	taille3 = taille1 + taille2 + 1;

	s3 = malloc(sizeof(char) * taille3);

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < taille1; index++)
	{
		s3[index] = s1[index];
	}
	for (index = 0; index < taille2; index++)
	{
		s3[taille1 + index] = s2[index];
	}
	return (s3);
}
