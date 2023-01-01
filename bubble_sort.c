#include<stdio.h>
void main(){
	int i,a[10],j,temp;
	for(i=0;i<10;i++){
		printf("Enter element : ");
		scanf("%d",&a[i]);	
	}
	for(i=0;i<10;i++){
		for(j=0;j<10-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}	
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
}
