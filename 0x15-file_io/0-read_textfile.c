#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: Number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor;
ssize_t bytes_read, bytes_written;
char *fp;

if (filename == NULL)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
fp = malloc(sizeof(char) * (letters + 1));
if (fp == NULL)
{
close(file_descriptor);
return (0);
}
bytes_read = read(file_descriptor, fp, letters);
if (bytes_read == -1)
{
free(fp);
close(file_descriptor);
return (0);
}
fp[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, fp, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(fp);
close(file_descriptor);
return (0);
}
free(fp);
close(file_descriptor);
return (bytes_written);
}
