#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * exit_error - print the POSIX standard error
 * @code: error code
 * @status: error information
 * @name_of_file: file concerned by error
*/
void exit_error(int code, char *status, char *name_of_file)
{
	dprintf(STDERR_FILENO, status, name_of_file);
	exit(code);
}

/*-------------------------------------*/

/**
 * main - copies the content of a file to another file
 * @argc: the number of file
 * @argv: file_from and file_to
 * Return: 0
*/
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	ssize_t char_r, char_w;
	char buffer[1024];

	if (argc != 3)
		exit_error(97, "Usage: %s file_from file_to\n", argv[0]);

	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
		exit_error(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = fopen(argv[2], "w");

	if (file_to == NULL)
		exit_error(99, "Error: Can't write to %s\n", argv[2]);

/* char_r init for use size char ,& buffer for read the content of file_from*/

	while ((char_r = fread(buffer, sizeof(char), sizeof(buffer), file_from)) > 0)
	{

/*char_w initialize the writing in file_to with the text read in file_from*/

		char_w = fwrite(buffer, sizeof(char), char_r, file_to);
		if (char_w != char_r)
			exit_error(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (fclose(file_from) == EOF)
		exit_error(100, "Error: Can't close file %s\n", argv[1]);

	if (fclose(file_to) == EOF)
		exit_error(100, "Error: Can't close file %s\n", argv[2]);

	return (0);
}
