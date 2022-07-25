#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends a text to file
 * @filename: name of file to be appended
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lenght = 0, fd_write;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		while (*(text_content + lenght) != '\0')
			lenght++;
		fd_write = write(fd, text_content, lenght);
		if (fd_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
