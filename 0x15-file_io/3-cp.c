#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = _cp(argv[1], argv[2]);
	printf("-> %i)\n", res);
	return (0);
}

/**
 * _cp - copies content of a file to another
 * @file_from: source file
 * @file_to: destination file
 * Return: 1 on success, 97,98,99,100 on failure
 */

int _cp(const char *file_from, const char *file_to)
{
	ssize_t fd1, fd2, wr, r, c1, c2;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		dprintf(STDOUT_FILENO, "failed to allocate memory\n");
	fd1 = open(file_from, O_RDONLY);
	r = read(fd1, buf, 1024);
	if (fd1 < 0 || r < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	c1 = close(fd1);
	if (c1 < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %ld\n", fd1);
		exit(100);
	}
	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	wr = write(fd2, buf, r);
	if (fd2 < 0 || wr < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	c2 = close(fd2);
	if (c2 < 0)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %ld\n", fd2);
		exit(100);
	}
	free(buf);
	return (1);
}
