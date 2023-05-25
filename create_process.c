#include "shell.h"
/**
 * create_process - creates a new process
 * @args: pointer to string of arguments
 *
 * Return: 1 success 0 otherwise
 */
int create_process(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("error creating process");
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		if (pid < 0)
		{
			perror("error creating process");
		}
		else
		{
			do {
				waitpid(pid, &status, WUNTRACED);
			} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		}
		return (-1);
	}
}
