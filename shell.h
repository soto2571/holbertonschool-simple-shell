#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void read_command(char **buffer, size_t *size);
void parse_command(char *command);

#endif

