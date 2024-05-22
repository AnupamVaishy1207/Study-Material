#include<stdio.h>
#include<unistd.h>

int main(void){
	int ret;
	printf(" Program started !!!\n");
	
	ret = fork();
	if(ret == 0)
	{
		printf("child :: pid = %d, ppid = %d\n", getpid(), getppid());
	}
	else
	{
		printf("parent :: pid = %d, ppid = %d\n", getpid(), getppid());
	}

	printf(" Program finished !!!\n");
	return 0;
}
