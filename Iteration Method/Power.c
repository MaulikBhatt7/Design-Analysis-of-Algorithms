#include<stdio.h>
#include<time.h>
void main(){
	int x,y,i,pow=1;
	clock_t start,end;
	double cpu_time_used;
	printf("Enter x = ");
	scanf("%d",&x);
	printf("Enter y = ");
	scanf("%d",&y);
	start = clock();
	for(i=1;i<=y;i++){
		pow*=x;
	}
	end = clock();
	
	printf("Answer = %d\n",pow);
	cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
	printf("%lf",cpu_time_used);	
	
}
