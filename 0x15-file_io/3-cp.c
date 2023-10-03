#include "main.h"

/**
 * handle_close - closes a file descriptor with proper error handling
 * @f_dr: file descriptor to close
 */
void handle_close(int f_dr)
{
	int n = close(f_dr);

	if (n < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_dr %d\n", f_dr);
		exit(100);
	}
}

/**
 * handle_rdwr - reads from file referenced by f_d to
 * file referenced by f_dwr, handling any read/write errors.
 * @f_d: file descriptor of file to read from.
 * @f_dwr: file descriptor of file to write to.
 * @BUFF: BUFFer of 1 kb.
 * @ptr1: pointer to string representation of argument 1
 * @ptr2: pointer to string representation of argument 2
 */
void handle_rdwr(int f_d, int f_dwr, char *BUFF, char *ptr1, char *ptr2)
{
	int nr, nw;

	while (nr != 0)
	{
		nr = read(f_d, BUFF, 1024);
		if (nr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ptr1);
			handle_close(f_d);
			handle_close(f_dwr);
			exit(98);
		}

		nw = write(f_dwr, BUFF, nr);
		if (nw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ptr2);
			handle_close(f_d);
			handle_close(f_dwr);
			exit(99);
		}
	}
}

/**
 * handle_args - checks if number of main function
 * arguments equals 3, and the first of them is equal to "cp"
 * @arg_number: number if main arguments.
 * @arg_first: first argument string.
 */
void handle_args(int arg_number, char *arg_first)
{
	(void)arg_first;
	if ((arg_number != 3))
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * _strcmp - compares two strings for greatness
 * @str1: a string
 * @str2: a string
 *
 * Return: a negative integer if str1 is less than str2;
 * a positive integer if str1 is greater than str2, and;
 * 0 if both strings are the same
 */
int _strcmp(char *str1, char *str2)
{
	int i, len, shift = 0;

	for (len = 0; *(str1 + shift);)
	{
		len++;
		shift++;
	}

	for (i = 0; (i <= (len + 1)); i++)
	{
		if ((*(str1 + i) == '\0') && (*(str2 + i) == '\0'))
		{
			return (0);
		}
		else if ((*(str1 + i) == '\0') || (*(str2 + i) > *(str1 + i)))
		{
			return ((*(str1 + i)) - (*(str2 + i)));
		}
		else if ((*(str2 + i) == '\0') || (*(str1 + i) > *(str2 + i)))
		{
			return ((*(str1 + i)) - (*(str2 + i)));
		}
	}
	return (0);
}
/**
 * main - copies the content of a file to another file.
 * @arg_number: the number of arguments
 * @av: an array of strings representing the arguments passed to main.
 *
 * Return: always 0.
 */
int main(int arg_number, char *av[])
{
	int f_d, f_dwr;
	char *BUFF;

	handle_args(arg_number, av[0]);
	BUFF = malloc(1025);
	if (BUFF == NULL)
	{
		exit(EXIT_FAILURE);
	}
	BUFF[1024] = 0;

	f_d = open(av[1], O_RDONLY);
	if (f_d < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	f_dwr = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_dwr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		handle_close(f_d);
		exit(99);
	}
	handle_rdwr(f_d, f_dwr, BUFF, av[1], av[2]);

	handle_close(f_d);
	handle_close(f_dwr);
	free(BUFF);

	return (0);
}
