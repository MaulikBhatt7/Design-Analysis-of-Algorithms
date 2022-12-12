#include<stdio.h>
#include<time.h>
int sumOfDigit(int n){	
	 int r;
	if(n<1){
		return 0;
	}
	else{
		r=n%10;
		n=n/10;
		return r+sumOfDigit(n);
	}
}
void main(){
	clock_t start,end;
	double cpu_time_used;
	 int n, sum;
	printf("Enter n = ");
	scanf("%d",&n);
	
	start = clock();
	sum = sumOfDigit(n);
	end = clock();
	
	cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
	
	printf("Sum = %d\n",sum);
	printf("Required time is %lf",cpu_time_used);	
}
