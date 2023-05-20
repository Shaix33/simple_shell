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
		return (-1);
	}
	cmd_cpy = strtok(cmd);
	token = strtok(cmd, delim);

	while (token)
	{
		token = strtok(NULL, delim);
		argc++;
	}
}
