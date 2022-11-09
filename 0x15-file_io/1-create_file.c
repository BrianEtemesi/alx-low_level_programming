#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be in file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, i, j, wr;
	char *buf;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		buf = malloc(sizeof(char) * i);
		if (buf == NULL)
			return (-1);

		for (j = 0; j < i; j++)
		{
			buf[j] = text_content[j];
		}

		wr = write(fd, buf, i);
		if (wr < 0)
			return (-1);

		free(buf);
	}

	close(fd);
	return (1);
}
