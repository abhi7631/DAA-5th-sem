#include<stdio.h>



int fibo(int );

int main()
{
	int f, n;
	printf("\nEnter the term of the series:\t");
	scanf("%d",&n);
	f=fibo(n);
	printf("\nThe %dth term is:\t%d",n,f);
	return 0;
}


int fibo(int n)
{
	int f;
	if(n==1||n==0)
		f=n;
	else
		f=fibo(n-2)+fibo(n-1);
	
	return(f);
}
