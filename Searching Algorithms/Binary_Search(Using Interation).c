#include<stdio.h>
void main(){
	int a[10],i;
	for(i=1;i<=10;i++){
		a[i-1]=i;
	}
	int index = bin_itr(a,6);
	if(index==-1){
		printf("Number not found");
	}
	else{
		printf("Number found at index : %d",index);
	}	
}
int bin_itr(int a[],int x){
	if(x>a[9]){
		return -1;
	}
	int i=0,j=9,k;
	while(i<j){
		k=(i+j)/2;
		if(x<=a[k]){
			j=k;
		}
		else{
			i=k+1;
		}
	}
	return i;
}
