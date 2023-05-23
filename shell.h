#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

char *cmd = NULL, *cmd_cpy = NULL, *token = NULL, *delim = NULL, **argv = NULL;
int argc = 0, x = 0;
size_t buf = 0;

void shell_interactive(void);

void shell_no_interactive(void);

#endif
