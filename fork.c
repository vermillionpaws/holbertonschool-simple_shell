#include <stdio.h>
#include <unistd.h>

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
		printf("soy el proceso hijo, PID: %d\n", getpid());
	}
	else
	{
		printf("soy el proceso padre, PID: %d\n", getpid());
	}

	return (0);
}
