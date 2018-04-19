#include<stdio.h>
#include<sys/types.h>
main(){
	int id;
	printf("Parent\n");
	id=fork();
	if(id==0)
		printf("I am child");
	if(id>0)
		sleep(10);
}
