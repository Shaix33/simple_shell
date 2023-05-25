#include "shell.h"
/**
 * exec_args - check if command is a built-in executable process
 * @args: pointer to arguments passed
 *
 * Return: 1 on sucess and -1 otherwise
 */
int exec_args(char **args)
{
	if (args[] == NULL)
	{
		return (-1);
	}
	for (x = 0; x < sizeof(builtins_list) / sizeof(char *); x++)
	{
		if (strcmp(args[0], builtins_list[x]) == 0)
		{
			return ((*built_ins[x])(args));
		}
	}
	return (child_process(args));
}
