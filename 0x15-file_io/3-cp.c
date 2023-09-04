#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_source does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_source cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int source, copy_to, read_file, write_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_source filecopy_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	read_file = read(source, buffer, 1024);
	copy_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read source file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_file = write(copy_to, buffer, read_file);
		if (copy_to == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_file = read(source, buffer, 1024);
		copy_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer);
	close_file(source);
	close_file(copy_to);

	return (0);
}
