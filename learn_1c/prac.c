#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
	pid_t myppid; 
	pid_t mypid;

	printf("Program to know PPID and PID Information\n");
	myppid = getpid();
	mypid = getppid();
	printf("My Process ID is %d\n", mypid);
	printf("My Parents Process ID is %d\n", myppid);
	printf("cross verifications of pid's by executing process commands on shell\n");
	return 0;
}
