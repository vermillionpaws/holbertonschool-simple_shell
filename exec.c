#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *args[] = {"/bin/ls", "-l", NULL};

	     
	if (execve(args[0], args, NULL) == -1)
	{
		perror("Error en execve");
	}
	return 0;
}
