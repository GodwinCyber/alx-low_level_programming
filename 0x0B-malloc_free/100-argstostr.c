#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the parameter to count the number of command line argunment passed
 * @av: the array string that count the actual command line argunment
 * Return: A  pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *concatenated;
	int position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated[position] = av[i][j];
			position++;
		}

		concatenated[position] = '\n';
		position++;
	}
	concatenated[total_length] = '\0';

	return (concatenated);
}
