#include<signal.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	printf("in raise function\n");
	sleep(2);
	raise(SIGALRM);
	sleep(10);
	return 0;
}
