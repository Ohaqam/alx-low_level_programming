#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename:            Parameter one.
* @text_content:        Parameter two.
* Return:               Returns 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{

int fd;
ssize_t len;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
len = write(fd, text_content, strlen(text_content));
close(fd);
if (len == -1)
return (-1);
return (1);
}
