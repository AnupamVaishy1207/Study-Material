#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>


int main(void){
	int ret, s;
	printf(" Program started !!!\n");
	
	ret = fork();
	if(ret == 0)
	{
		execl("/usr/bin/ls", "ls", NULL);
	}
	else
	{
		wait(&s);
	}
	

	printf(" Program finished !!!\n");
	return 0;
}
