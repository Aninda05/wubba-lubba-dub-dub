#include<sys/types.h>
#include<stdio.h>
int main()
{
	printf("Before Child\n");
	fork();
	printf("After Child\n");
	return 0;
}
