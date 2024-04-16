#include "shell.h"

/**
 * parse_command - Parse the command string into tokens
 * @command: Pointer to the command string
 *
 * Return: None
 */

void parse_command(char *command)
{
	char *token;

	token = strtok(command, " \n");
	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, " \n");
	}
}
