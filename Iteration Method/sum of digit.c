#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time_used;
	int n,r,sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	start = clock();
	while(n!=0){
		r=n%10;
		n=n/10;
		sum+=r;
	}
	end = clock();
	printf("%d\n",sum);
	cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
	printf("%lf",cpu_time_used);
}
