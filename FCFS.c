#include<stdio.h>
struct Proc{
	int b;
	int wt,ta,pr;
	}p[10],t;
int main(){
	int i,j,c,n;
	float g=0,at=0,aw=0;
	printf("Enter the range\n");
	scanf("%d",&n);
	printf("Enter the burst times\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i].b);

	printf("---PRIORITY---\n");
	printf("Enter the priorities\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i].pr);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p[i].pr>p[j].pr){
				t=p[i];
				p[i]=p[j];
				p[j]=t;
				}
			}
		}
	for(i=0;i<n;i++)
		printf("%d\t%d",p[i].pr,p[i].b);
		printf("\n");	
	for(i=0;i<n;i++){
		g+=(float)p[i].b;
		p[i].ta=g;
		p[i].wt=p[i].ta-p[i].b;
		at+=(float)p[i].ta;
		aw+=(float)p[i].wt;
	}
		printf("TurnAround is %.2f\n",at);
		printf("Waiting is %.2f\n",aw);
		printf("Average of TurnAround is %.2f\n",(at/n));
		printf("Average of Waiting is %.2f\n",(aw/n));
	
	return 0;
}
