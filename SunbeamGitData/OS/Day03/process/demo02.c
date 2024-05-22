#include<stdio.h>
#include<unistd.h>

int main(void){
	printf(" Program started !!!\n");
	fork();
	printf(" Program finished !!!\n");
	printf("pid = %d, ppid = %d\n", getpid(), getppid());
	return 0;
}
