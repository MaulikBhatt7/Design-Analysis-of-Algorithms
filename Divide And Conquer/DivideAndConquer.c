#include<stdio.h>
void main(){
	int n1,n2,ans;
	printf("Enter n1 : ");
	scanf("%d",&n1);
	printf("Enter n2 : ");
	scanf("%d",&n2);
	ans=produce(n1,n2);
	printf("%d",ans);	
}
int produce(int u,int v){
	int countOfU,countOfV,n,w,x,y,z,ans,p,q,r;
	countOfU=noOfDigit(u);
	countOfV=noOfDigit(v);
	n=maxDigitNumber(countOfU,countOfV);
	if(u==0 || v==0){
		return 0;
	}
	else if(n<=2){
		return u*v;
	}
	else{
		int m=n/2;
		w=u/power(10,m);
		x=u%power(10,m);
		y=v/power(10,m);
		z=v%power(10,m);
		p=produce(w,y);
		q=produce(x,z);
		r=produce(w+x,y+z);
		
		ans = power(10,n)*p + (r-p-q)*power(10,m)+q;
		return ans;
	}
	
}
int noOfDigit(int n){
	int r,count=0;
	while(n>0){
		n=n/10;
		count++;
	}
	return count;
}
int maxDigitNumber(int u,int v){
	if(u>v){
		return u;
	}
	else{
		return v;
	}
}
int power(int x,int y){
	int power=1;
	while(y>0){
		power*=x;
		y--;
	}
	return power;
}

