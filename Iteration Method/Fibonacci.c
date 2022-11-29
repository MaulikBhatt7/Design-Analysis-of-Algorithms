#include<stdio.h>
void main(){
	int n,a=0,b=1,sum,i;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("%d , %d ,",a,b);
	for(i=2;i<n;i++){
		sum=a+b;
		printf("%d , ",sum);
		a=b;
		b=sum;
	}
}
