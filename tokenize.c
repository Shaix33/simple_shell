#include "shell.h"
/**
 * tokenize - split a string into tokens
 * @cmd: string to be split
 *
 * Return: pointer to the new array of strings
 */
char split_args(char *cmd)
{
	char **tokens = malloc(buffsize * sizeof(char *)), err = "Allocation error";

	if (!tokens)
	{
		write(STDERR_FILENO, err, -1);
		exit(EXIT_FAILURE);
	}
	token = strtok(cmd, delimeter);
	while (token != NULL)
	{
		if (token[0] == '#')
		{
			break;
		}
		tokens[x] = token;
		x++;
		if (x >= buffsize)
		{
			buffsize += buffsize;
			tokens = realloc(tokens, buffsize * sizeof(char *));
			if (!tokens)
			{
				write(STDERR_FILENO, err, -1);
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, delimiter);
	}
	tokens[x] = NULL;
	return (tokens);
}
