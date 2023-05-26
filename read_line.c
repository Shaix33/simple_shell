#include "shell.h"

/**
* read_line - reads user input
* @i_eof: ...
* Return: input
*/

char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
