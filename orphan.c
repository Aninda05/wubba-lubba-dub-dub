#include<stdio.h>
#include<sys/types.h>

int main(){
	int id;
	id=fork();
	if(id==0)
		sleep(10);
	else if(id>0)
		printf("I am parent");
	return 0;
}
