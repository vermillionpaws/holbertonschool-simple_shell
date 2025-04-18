#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("Error en fork");
		return (1);
	}
	else if (pid == 0)
	{
		printf("Soy el proceso hijo, PID: %d\n", getpid());
		return (0);
	}
	else
	{
		wait(NULL);
		printf("Soy el proceso padre, PID: %d. El hijo ha terminado.\n", getpid());
	}

	return(0);
}
