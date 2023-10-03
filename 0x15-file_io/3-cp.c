#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void open_close_status(int status, int f_dr, char *filename, char mode);

/**
 * open_close_status - checks if a file can be opened or closed
 * @status: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @f_dr: file descriptor
 *
 * Return: void
 */
void open_close_status(int status, int f_dr, char *filename, char mode)
{
	if (mode == 'C' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_dr %d\n", f_dr);
		exit(100);
	}
	else if (mode == 'O' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int source, destination, n_read = 1024, wrote,
	    close_soource, close_destination;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	open_close_status(source, -1, argv[1], 'O');
	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	open_close_status(destination, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(source, buff, sizeof(buff));
		if (n_read == -1)
			open_close_status(-1, -1, argv[1], 'O');
		wrote = write(destination, buff, n_read);
		if (wrote == -1)
			open_close_status(-1, -1, argv[2], 'W');
	}
	close_soource = close(source);
	open_close_status(close_soource, source, NULL, 'C');
	close_destination = close(destination);
	open_close_status(close_destination, destination, NULL, 'C');
	return (0);
}
