#include "main.h"
#include <stdio.h>

/**
 * code97 - checks for the correct number of arguments
 * @argc: number of arguments
 */

void code97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * code98 - checks if file_from exists and can be read
 * @check: checks if true or false
 * @filename: name of file_from
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 */

void code98(ssize_t check, char *filename, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);

		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * code99 - checks if file_to can be created or written to
 * @check: checks if true or false
 * @filename: name of file_to
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 */

void code99(ssize_t check, char *filename, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);

		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * code100 - checks that file descriptors closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 */

void code100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r = 1024, w;
	char buffer[1024];
	mode_t file_perm; /*file permission*/

	code97(argc);
	fd_from = open(argv[1], O_RDONLY);
	code98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	code99((ssize_t)fd_to, argv[2], fd_from, -1);

	while (r == 1024)
	{
		r = read(fd_from, buffer, 1024);
		code98(r, argv[1], fd_from, fd_to);

		w = write(fd_to, buffer, r);

		if (w != r)
			w = -1;
		code99(w, argv[2], fd_from, fd_to);
	}
	code100((close(fd_to)), fd_to);
	code100((close(fd_from)), fd_from);

	return (0);
}
