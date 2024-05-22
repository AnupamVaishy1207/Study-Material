#include<stdio.h>
#include<unistd.h>

// orphan process

int main(void){
	int ret;
	printf(" Program started !!!\n");
	
	ret = fork();
	if(ret == 0)
	{
		for(int i = 1 ; i <= 15 ; i++)
		{
			printf("child : i = %d\n", i);
			sleep(1);
		}
	}
	else
	{
		for(int i = 10 ; i > 0 ; i--)
		{	
			printf("parent : i = %d\n", i);
			sleep(1);
		}
	}

	printf(" Program finished !!!\n");
	return 0;
}
