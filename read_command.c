#include "shell.h"

/**
 * read_command - Read user input from standard input
 * @buffer: Pointer to the buffer where input will be stored
 * @size: Pointer to the size of the buffer
 *
 * Return: None
 */

void read_command(char **buffer, size_t *size)
{
	ssize_t characters_read;

	characters_read = getline(buffer, size, stdin);
	if (characters_read == -1)
	{
		fprintf(stderr, "Error: Failed to read input\n");
		exit(EXIT_FAILURE);
	}

}
