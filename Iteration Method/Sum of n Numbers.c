#include<stdio.h>
void main(){
	int n;
	
	printf("Enter n = ");
	scanf("%d",&n);
	printf("%d",sum(n));
}
int sum(int n){
	int sum=0,i;
	
	for(i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}
