#include<stdio.h>
#include<sys/types.h>
main(){
	int id,id1;
	printf("Parent\n");
	printf("Process id is %d\n",getpid());
	id=fork();
	if(id>0){
		printf("Child id is %d\n",id);
		id1=fork();
		if(id1>0)
			printf("Child id is %d\n",id1);
		if(id1 == 0)
			printf("Parent id of 2nd child is %d\n",getppid());
		}
	if(id == 0)
		printf("Parent id of 1st chlid is %d\n",getppid());
}
