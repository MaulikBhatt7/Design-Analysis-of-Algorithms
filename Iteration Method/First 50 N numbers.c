#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time_used;
	start = clock();
	int i;
	
	for(i=1;i<=50;i++){
		printf("%d , ",i);
	}
	end = clock();
	cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
	printf("%lf",cpu_time_used);	
}
