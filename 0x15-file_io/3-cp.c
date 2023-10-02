#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line argument strings.
 *
 * Return: 0 on success, exit codes 97, 98, 99, or 100 on failure.
 */

int main(int ac, char **av)
{
	int src_fd, dest_fd;
	ssize_t bytes;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		dprintf(2, "Usage: %s file_from file_to\n", av[0]), exit(97);

	src_fd = open(av[1], O_RDONLY);
	if (src_fd == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	dest_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		dprintf(2, "Error: Can't write to file %s\n", av[2]),
			close(src_fd), exit(99);

	while ((bytes = read(src_fd, buffer, BUFFER_SIZE)) > 0)
		if (write(dest_fd, buffer, bytes) == -1)
			dprintf(2, "Error: Can't write to file %s\n", av[2]),
				close(src_fd), close(dest_fd), exit(99);

	if (bytes == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]),
			close(src_fd), close(dest_fd), exit(98);

	if (close(src_fd) == -1 || close(dest_fd) == -1)
		dprintf(2, "Error: Can't close fd\n"), exit(100);

	return (0);
}
