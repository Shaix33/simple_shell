#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;
int buffsize = 64, x = 0;

char *cmd = NULL, *cmd_cpy = NULL, *token = NULL, *delim = " \n", **argv = NULL;
size_t buf = 0;

char *builtins_list[] = {"cd", "environ", "help", "exit"};
int (*built_ins[])(char **) = {&_cd, _environ, _help, _exit};

char split_args(char *cmd);
char read_args(void);

#endif
