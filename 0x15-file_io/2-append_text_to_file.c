#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: NULL-terminated string to add at the end of file
 * Return: 1 on success, -1 on failure
 *
 * Description: The function append text to the end of a file.If
 * text_content is NULL , nothing will be added
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, length = 0;
if (filename == NULL)
return (-1);
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[length])
length++;
bytes_written = write(file_descriptor, text_content, length);
if (bytes_written != length)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}
