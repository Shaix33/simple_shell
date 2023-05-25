#include "shell.h"
/**
 * read_stream - reads input from the stream
 *
 * Return: pointer to the stream
 */
char read_stream(void)
{
	int buffsize = 1024;
	int x = 0;
	char *input = malloc(sizeof(char *) *buffsize);
	int count;

	if (input == NULL)
	{
		perror("Error reading input");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		count = getchar();
		if (count == EOF)
		{
			free(input);
			exit(EXIT_FAILURE);
		}
		else if (count == '\n')
		{
			input[x] = '\0';
			return (input);
		}
		else
		{
			input[x] = count;
