#include "shell.h"

/**
 * main - Entry point of th simple shell program
 *
 * Descrtiption:
 * This function serves as the entry point of the simple shell program.
 * It continuously prompts the user for input, reads the input, parses
 * the command, and then executes it. The shell runs indefinitely until
 * the user chooses to exit.
 *
 * Return: Always returns - to indicate successful execution
 */

int main(void)
{
	char *buffer = NULL, *token, *args[ARG_MAX];
	size_t bufsize = 0;
	ssize_t characters_read;
	int i, is_empty = 0, j;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("HSJ$ ");

		characters_read = getline(&buffer, &bufsize, stdin);

		if (characters_read == -1)
		{
			if (isatty(STDIN_FILENO))
				printf("\n");
			
			free(buffer);
			exit(EXIT_SUCCESS);
		}

		remove_newline(buffer);

		for (j = 0; j < characters_read; j++)
		{
			if (!isspace(buffer[j]))
			{
				is_empty = 0;
				break;
			}
		}

		if (is_empty)
		{
			free(buffer);
			continue;
		}

		token = strtok(buffer, " ");
		i = 0;
		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;

		if (strcmp(args[0], "exit") == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}

		execute_command(args);

	}
	return (0);
}

