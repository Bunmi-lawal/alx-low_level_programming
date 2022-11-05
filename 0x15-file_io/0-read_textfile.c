#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - function that reads a text file
 * @filename:  pointer to the text file
 * @letters: number of letters it should read and print
 * return: actual number or zero
 * O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd = open(filename, O_RDONLY);
ssize_t bytes = 0, write_o = -1;
char *buf = NULL;
if (fd > -1 && filename)
{
buf = malloc(sizeof(char) * (letters + 1));
if (buf)
{
bytes = read(fd, buf, letters);
buf[bytes] = '\0';
if (bytes > -1)
write_o = write(STDOUT_FILENO, buf, bytes);
free(buf);
close(fd);
if (write_o > -1)
return (bytes);
}
}
return (0);
}
