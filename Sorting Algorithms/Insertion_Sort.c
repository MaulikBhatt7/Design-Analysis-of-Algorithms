#include<stdio.h>
void main(){
	int i,j,n,x,a[100];
	printf("Enter no. of elements of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter array element : ");
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++){
		x=a[i];
		j=i-1;
		while(x<a[j] && j>=0){
			a[j+1]=a[j];
			j=j-1;	
		}
		a[j+1]=x;
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
