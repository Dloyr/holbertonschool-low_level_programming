#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: the pointer to the file
 * @text_content: - the text to append
 * Return: -1 or 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a+");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
		fwrite(text_content, sizeof(char), strlen(text_content), file);

	fclose(file);
	return (1);
}
