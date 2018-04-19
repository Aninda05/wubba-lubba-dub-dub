#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void quitpro(){
	printf("\nCtrl+C proccess quits\n");
	exit(0);
}
main(){
	signal(SIGINT,quitpro);
	signal(SIGQUIT,quitpro);
	for(;;);
}
