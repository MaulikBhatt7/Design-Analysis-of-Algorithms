#include<stdio.h>
void main(){
	int n,i,minj,minx,j,a[100];
	printf("Enter no. of elements of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter array element : ");
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n-1;i++){
		minx=a[i];
		minj = i;
		for(j=i+1;j<n;j++){
			if(minx>a[j]){
				minj=j;
				minx=a[j];
			}
		}
		a[minj] = a[i];
		a[i] = minx;
	}	
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
