#include "shell.h"
#include <sys/wait.h>

void execute_command(char *args[])
{
	int status;
       	pid_t pid = fork();

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
    }
}

