#include<stdio.h>
#include<time.h>
void main(){
	clock_t start,end;
	double cpu_time_used;
	int n,i;
	int arr[10];
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter array element : ");
		scanf("%d",&arr[i]);
	}
	start = clock();
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	end = clock();
	
	cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
	printf("%lf",cpu_time_used);	
}
