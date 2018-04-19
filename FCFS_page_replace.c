#include<stdio.h>
#define MAX 20
#define MIN 5

int main(){
	int i,j,n,a[MAX],f[MIN],no,k,avail,count=0;
	printf("Enter number of pages\n");
	scanf("%d",&n);
	printf("Enter the pages\n");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		}
	printf("ENter number of frames\n");
	scanf("%d",&no);	
	for(i=0;i<no;i++)
		f[i]=-1;
	j=0;
	printf("\tREF STRING\tPAGE FRAMES\n");
	for(i=1;i<=n;i++){
		printf("%d\t\t",a[i]);
		avail=0;
		for(k=0;k<no;k++)
			if(f[k]==a[i])
				avail=1;
			if(avail==0){
				f[j]=a[i];
				j=(j+1)%no;
				count++;
				for(k=0;k<no;k++)
					printf("\t%d\t",f[k]);
			}
			printf("\n");
		}
	printf("Page fault is %d",count);
	return 0;
}
