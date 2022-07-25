#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * read_textfile - reads a text file and prints it to POSIX
  * @filename: name of the file
  * @letters: number of letters in the file
  * Return: number of letters read and printed else 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_read, fd_write;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd_read = read(fd, buf, letters);
	if (fd_read == -1)
	{
		free(buf);
		return (0);
	}
	fd_write = write(STDOUT_FILENO, buf, fd_read);
	if (fd_write == -1 || fd_read != fd_write)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (fd_write);
}
