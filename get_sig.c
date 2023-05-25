#include "shell.h"

/**
* get_sigint - checks the crtl + c call in prompt
* @sig: handles signal
*/

void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
