#include "shell.h"
/**
 * Creating_prompt - displaying terminal prompt
 * 
 * Return: Always 0 Success
 */
int main(void)
{
	while(1)
	{
		write(STDOUT_FILENO, prompt, 2);
	
		if (getline(&cmd, &buf, stdin) == -1)
		{
			return (-1);
		}
		cmd_cpy = strdup(cmd);
		token = strtok(cmd, delim);

		while (token)
		{
			token = strtok(NULL, delim);
			argc++;
		}
		argv = malloc(sizeof(char *) * argc);
		token = strtok(cmd_cpy, delim);

		while (token)
		{
			argv[x] = token;
			token = strtok(NULL, delim);
			x++;
		}
		argv[x] = NULL;
		x = 0;

		while(argv[x])
		{
			printf("%s\n", argv[x++]);
		}
		free(cmd), free(cmd_cpy), free(argv);
		return (0);
	}
}
