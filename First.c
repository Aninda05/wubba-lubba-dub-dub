#include<stdio.h>
#include<sys/types.h>
main(){
	int id;
	printf("Parent\n");
	printf("Process id is %d\n",getpid());
	id=fork();
	if(id>0)
		printf("Child id is %d\n",id);
	if(id == 0)
		printf("Parent id is %d\n",getppid());
	printf("Child\n");
	}
