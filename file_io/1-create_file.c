#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - create a new text file
 * @filename: the pointer to new text file
 * @text_content: - the content of the new text file
 * Return: -1 or 1
*/
int create_file(const char *filename, char *text_content)
{
	FILE *new_file;

	if (filename == NULL)
		return (-1);

	new_file = fopen(filename, "w");
	chmod(filename, 0600);

	if (new_file == NULL)
		return (-1);

	if (text_content != NULL)
		fwrite(text_content, sizeof(char), strlen(text_content), new_file);

	fclose(new_file);
	return (1);
}
