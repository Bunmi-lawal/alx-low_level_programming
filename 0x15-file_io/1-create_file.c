#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with the given name and writes the text content
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *
 * Description: The function creates a file with the specified filename.If the
 * file already exists,its content will b truncated.The text_content is written
 * to the file. If text_content is NULL, an empty file is created.
 * The file will have permissions rw-------.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor;
ssize_t bytes_written;
size_t text_length = 0;
if (filename == NULL)
return (-1);
file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[text_length] != '\0')
text_length++;
bytes_written = write(file_descriptor, text_content, text_length);
if ((size_t) bytes_written != text_length)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}
