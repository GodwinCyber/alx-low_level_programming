#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line argument strings.
 *
 * Return: 0 on success, exit codes 97, 98, 99, or 100 on failure.
 */

int main(int argc, char *argv[])
{
	int source_fd, target_fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buffer(argv[2]);
	source_fd = open(argv[1], O_RDONLY);

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		target_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

		if (target_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_fd(source_fd);
			exit(99);
		}
		bytes_written = write(target_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_fd(source_fd);
			close_fd(target_fd);
			exit(99);
		}

		close_fd(target_fd);
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close_fd(source_fd);
		exit(98);
	}

	free(buffer);
	close_fd(source_fd);

	return 0;
}

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *allocate_buffer(const char *file)
{
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return buffer;
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_fd(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
