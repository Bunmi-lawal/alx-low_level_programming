#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * error_exit - Prints the error message and exits the program
 * with the given code
 * @code: Exit code
 * @msg: Error message to print
 * @filename: The name of the file related to the error
 */
void error_exit(int code, const char *msg, const char *filename)
{
dprintf(STDERR_FILENO, msg, filename);
exit(code);
}
/**
 * cp - Copies the content of one file to another file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void cp(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file %s\n", file_from);
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_exit(99, "Error: Can't write to %s\n", file_to);
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
error_exit(99, "Error: Can't write to %s\n", file_to);
}
if (bytes_read == -1)
error_exit(98, "Error: Can't read from file %s\n", file_from);
if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd %d\n", int fd_from);
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd %d\n", int fd_to);
}
/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0 on success, or the exit code on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}
cp(argv[1], argv[2]);
return (0);
}
