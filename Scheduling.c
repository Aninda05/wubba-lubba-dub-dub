#include<stdio.h>
struct Proc{
	int b;
	int wt,ta,pr;
	}p[10];
int main(){
	int i,j,c,n,t;
	float g=0,at=0,aw=0;
	printf("Enter the range\n");
	scanf("%d",&n);
	printf("Enter the burst times\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i].b);
	while (1){
	printf("1.FCFS\n2.SJF\n3.PRIORITY\n4.Exit\nEnter choice\n");
	scanf("%d",&c);
	
	switch(c)
	{
	case 1:
		aw=at=g=0.0;
		printf("---FCFS---\n");
		for(i=0;i<n;i++){
			g+=(float)p[i].b;
			p[i].ta=g;
			p[i].wt=p[i].ta-p[i].b;
			at+=(float)p[i].ta;
			aw+=(float)p[i].wt;
		}
		printf("Average of TurnAround is %.2f\n",(at/n));
		printf("Average of Waiting is %.2f\n",(aw/n));
		break;
	case 2:
		aw=at=g=0.0;
		printf("---SJF---\n");
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(p[j].b<p[i].b){
					t=p[i].b;
					p[i].b=p[j].b;
					p[j].b=t;
					}
				}
			}
		
		for(i=0;i<n;i++){
			g+=(float)p[i].b;
			p[i].ta=g;
			p[i].wt=p[i].ta-p[i].b;
			at+=(float)p[i].ta;
			aw+=(float)p[i].wt;
		}
		printf("Average of TurnAround is %.2f\n",(at/n));
		printf("Average of Waiting is %.2f\n",(aw/n));
		break;
	case 3:
		printf("LOL");
	case 4:
		return 0;
		
	default:
		printf("Try again later");
	}
	}
	return 0;
}
