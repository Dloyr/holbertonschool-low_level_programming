#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read the content of a file.txt
 * @filename: the name of the file
 * @letters: all characters in the file
 * Return: 0 or the number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t char_read, char_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	char_read = fread(buffer, sizeof(char), letters, file);
	if (char_read == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	char_written = fwrite(buffer, sizeof(char), char_read, stdout);
	if (char_written != char_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);

	return (char_read);
}
