#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

// zombie process

int main(void){
	int ret, s;
	printf(" Program started !!!\n");
	
	ret = fork();
	if(ret == 0)
	{
		for(int i = 1 ; i <= 10 ; i++)
		{
			printf("child : i = %d\n", i);
			sleep(1);
		}
	}
	else
	{
		for(int i = 15 ; i > 0 ; i--)
		{	
			if(i == 5)
			{
				wait(&s);
			}
			printf("parent : i = %d\n", i);
			sleep(1);
		}
	}

	printf(" Program finished !!!\n");
	return 0;
}
