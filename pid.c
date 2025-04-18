#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("parent PID: %d\n", getppid());
	return (0);
}
