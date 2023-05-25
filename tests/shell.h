#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT_SIZE 1024
#define MAX_ARGS 64
#define DELIMITER " \t\n"

/*Declaring comments*/
char *cmd = NULL, *cmd_cpy = NULL, *token = NULL, *delim = " \n", *prompt = "$ ", **argv = NULL;
int argc = 0, x = 0;
size_t buf = 0;
char *args;

#endif
