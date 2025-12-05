#include "main.h"

#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * _strlen - Computes the length of a cstring.
 * @s: The cstring to compute the length of.
 * Return: The length of the cstring, not including the null terminator.
*/
size_t _strlen(const char *s)
{
	size_t count = 0;

	while (s[count])
	{
		++count;
	}
	return (count);
}

/**
 * create_file - Creates or truncate a file
 * @filename: The path to the file to be created or truncated
 * @text_content: The content to put in the file
 * Return: 1 on success or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd = -1;
	size_t len = 0;
	size_t total_written = 0;
	size_t written = 0;

	if (!filename)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		return (-1);
	}

	len = _strlen(text_content);

	while (!total_written || (total_written < len))
	{
		written = write(fd, text_content + total_written, len - total_written);
		if (written <= 0)
		{
			close(fd);
			return (-1);
		}
		total_written += written;
	}

	close(fd);
	return (1);
}
