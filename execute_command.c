#include "shell.h"
#include <sys/wait.h>
/**
 *execute_command - Handles args and others
 *
 *@args: Arguments pass by the user
 *
 */
void execute_command(char *args[])
{
	int status;
	pid_t pid = fork();
	int exit_status;

	if (pid == -1)
	{

	perror("fork");
	exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{

	if (execvp(args[0], args) == -1)
	{

		perror("execvp");
		exit(EXIT_FAILURE);
	}
	}
	else
	{
	if (waitpid(pid, &status, 0) == -1)
	{
		perror("waitpid");
		exit(EXIT_FAILURE);
	}

	if (WIFEXITED(status))
	{
		exit_status = WEXITSTATUS(status);

	if (exit_status != 0)
	{
		fprintf(stderr, "Command failed with exit status %d\n", exit_status);
		exit(exit_status);
	}
	}
}
}

