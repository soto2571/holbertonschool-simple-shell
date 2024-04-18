#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define ARG_MAX 512

void execute_command(char *args[]);
void remove_newline(char *str);


#endif

