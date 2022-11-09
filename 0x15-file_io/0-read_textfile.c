#include "main.h"

/**
 * read_textfile - reads text file and prints it STDOUT
 * @filename: name of the file
 * @letters: number of letters to be printed
 * Return: actual number of letters printed, 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	r = read(fd, buf, letters);
	if (r < 0)
		return (0);
	wr = write(STDOUT_FILENO, buf, r);
	if (wr < 0 || wr != r)
		return (0);

	free(buf);
	close(fd);
	return (wr);
}
