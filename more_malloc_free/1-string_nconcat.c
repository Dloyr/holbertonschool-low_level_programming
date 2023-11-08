#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first part to concatenate
 * @s2: second part to concatenate
 * @n: length
 * Return: space , null or value of s3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int taille1 = 0, taille2 = 0, taille3, index;

	if (s1 == NULL)
		return (" ");

	if (s2 == NULL)
		return (" ");

	for (index = 0; s1[index]; index++)
		taille1++;

	for (index = 0; s2[index]; index++)
		taille2++;

	if (taille2 <= n)
		taille2 = n;

	taille3 = taille1 + n + 1;

	s3 = malloc(sizeof(char) * taille3);

	if (s3 == NULL)
		return (NULL);

	for (index = 0; index < taille1; index++)
		s3[index] = s1[index];

	for (index = 0; index < n; index++)
		s3[taille1 + index] = s2[index];

	return (s3);
}
