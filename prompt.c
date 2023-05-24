#include "shell.h"
void sash(char **args);

/**
* Creating_prompt - displaying terminal prompt
*
* Return: Always 0 Success
*/

int main(int argc, char **argv)
{
	(void) argc;
	sash(argv);
	return (0);
}

void sash(char **args)
{
	char *prompt = ("$ ");
	char *input = NULL;
	size_t len = 0;

	while(1)
	{
		write(1, prompt, strlen(prompt));
		if (getline(&input, &len, stdin) == -1)
			exit(98);

	}

}
