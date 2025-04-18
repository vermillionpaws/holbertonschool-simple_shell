#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("PID del proceso padre: %d\n", getppid());
	return (0);
}
