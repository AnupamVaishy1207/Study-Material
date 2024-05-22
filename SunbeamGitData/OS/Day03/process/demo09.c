#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *fun1(void *param)
{
	for(int i = 1 ; i <= 10 ; i++)
	{
		printf("fun1 :: %d * 5 = %d\n", i, i * 5);
		sleep(1);
	}
}

void *fun2(void *param)
{
	for(int i = 1 ; i <= 10 ; i++)
	{
		printf("fun2 :: %d * 6 = %d\n", i, i * 6);
		sleep(1);
	}
}

int main(void)
{
	//fun1();
	//fun2();

	pthread_t t1, t2;

	pthread_create(&t1, NULL, fun1, NULL);
	pthread_create(&t2, NULL, fun2, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	return 0;
}










