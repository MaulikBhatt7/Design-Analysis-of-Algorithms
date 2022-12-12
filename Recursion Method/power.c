#include<stdio.h>
int power(int x,int y){
	if(y==1){
		return x;	
	}
	else{
		return x*power(x,y-1);
	}
}
void main(){
	int x,y,ans;
	printf("Enter x = ");
	scanf("%d",&x);
	printf("Enter y = ");
	scanf("%d",&y);
	
	ans = power(x,y);
	
	printf("Answer = %d\n",ans);
}
