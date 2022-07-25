#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  * create_file - creates a file
  * @filename: name of file to be created
  * @text_content: a NULL terminated string to write to the file
  * Return: 1 on success, -1 if fails
  */
int create_file(const char *filename, char *text_content)
{
	int fd, lenght = 0;
	ssize_t fd_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + lenght) != '\0')
			lenght++;
		fd_write = write(fd, text_content, lenght);
		if (fd_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
