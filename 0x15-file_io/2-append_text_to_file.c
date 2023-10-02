#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	f_d = open(filename, O_WRONLY | O_APPEND);
	if (f_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(f_d, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(f_d);
			return (-1);
		}
	}
	close(f_d);
	return (1);
}
