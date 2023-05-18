#include "shell.h"
/**
 * Creating_prompt - displaying terminal prompt
 * 
 * Return: Always 0 Success
 */
int main(void)
{
	printf("$ ");
	if (getline(&cmd, &buf, stdin) == -1)
	{
		printf("Error");
	}
	cmd_cpy = strdup(cmd);
	token = strtok(cmd, delim);

	while (cmd[x])
	{
		token = strtok(NULL, delim);
		argc++;
	}
	printf("%s\n", token);
	printf("%d\n", argc);
	return (0);
}
