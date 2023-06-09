#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int pid;
	int pids[3];
	int status;
	int numprocess = 0;
	int totalprocess = 3;
	while (numprocess < totalprocess) {
		pid = fork();

		//child process
		if (pid == 0) {
			printf("In child process: process id is %d\n", getpid());
			sleep(5);
			return 4;
		} else {
			pids[numprocess] = pid;
			numprocess++;
			printf("In parent process: created process number: %d\n", pid);
		}
	}

	//Waiting for third child process
	waitpid(pids[totalprocess - 1], &status, 0);
	if (WIFEXITED(status) != 0) {
		printf("process %d exited normally\n", pids[totalprocess - 1]);
		printf("exit status from child is %d\n", WEXITSTATUS(status));
	} else {
		printf("process %d not exited normally\n", pids[totalprocess - 1]);
	}
	return 0;

}

