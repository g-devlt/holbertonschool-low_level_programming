#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads and prints a text file's content
 * @filename: The path to the file
 * @letters: The number of character to read and print
 * Return: The number of characters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = -1;
	ssize_t red = -1;
	ssize_t wrote = 0;
	char *buf = (char *)malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL || letters == 0)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	red = read(fd, buf, letters);
	if (red < 0)
		return (0);

	wrote = write(STDOUT_FILENO, buf, red);
	if (wrote != red)
		return (0);

	free(buf);
	return (wrote);
}
