#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

extern char **environ;
/* Variables to be moved */
int buffsize = 64, x = 0;
char *cmd = NULL, *cmd_copy = NULL, *token, *prompt = "$ ", delimeter = "\t\n";
size_t buffer = 0;

char *builtins_list[] = {"cd", "environ", "help", "exit"};
int (*built_ins[])(char **) = {&_cd, _environ, _help, _exit};

char split_args(char *cmd);
char read_args(void);

#endif
