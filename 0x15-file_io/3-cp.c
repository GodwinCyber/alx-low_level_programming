#include "main.h"
#include <errno.h>


int open_source_file(const char *filename);
int open_target_file(const char *filename);
void copy_file(int source_fd, int target_fd);
void close_file(int fd);

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line argument strings.
 *
 * Return: 0 on success, exit codes 97, 98, 99, or 100 on failure.
 */

int main(int ac, char **av)
{
	int source_fd, target_fd;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	source_fd = open_source_file(av[1]);
	target_fd = open_target_file(av[2]);

	copy_file(source_fd, target_fd);

	close_file(source_fd);
	close_file(target_fd);

	return (0);
}

/**
 * open_source_file - Opens the source file for reading.
 * @filename: The name of the source file to open.
 *
 * Return: The file descriptor of the opened file.
 */

int open_source_file(const char *filename)
{
	int source_fd = open(filename, O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (source_fd);
}

/**
 * open_target_file - Opens the target file for writing.
 * @filename: The name of the target file to open.
 *
 * Return: The file descriptor of the opened file.
 */

int open_target_file(const char *filename)
{
	int target_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (target_fd == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
	return (target_fd);
}

/**
 * copy_file - Copies the content from the source file to the target file.
 * @source_fd: The file descriptor of the source file.
 * @target_fd: The file descriptor of the target file.
 */

void copy_file(int source_fd, int target_fd)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(target_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
