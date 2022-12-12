#include<stdio.h>
#include<time.h>
long int fact1(long int n){
	if(n==1 || n==0){
		return 1;
	}
	else{
		return n*fact1(n-1);	
	}
}
void main(){
	clock_t start,end;
	double cpu_time_used;
	long int n,factorial;
	printf("Enter n = ");
	scanf("%ld",&n);
	
	start = clock();
	factorial = fact1(n);
	
	end = clock();
	
	printf("Answer is %ld\n",factorial);
	
	cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
	printf("%lf",cpu_time_used);
}

