#ifndef __FILE_IO__
#define __FILE_IO__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void exit_error (int code, char *status, char *name_of_file);
int Copy_file(int argc, char *argv[]);
#endif
