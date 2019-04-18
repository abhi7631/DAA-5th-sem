#include<stdio.h>

long int power(int , int);


int main()
{
	int n,m;
	long int p;
	printf("\nEnter the no and the power:\t");
	scanf("%d%d",&n,&m);
	p=power(n,m);
	printf("%d ^ %d =%ld",n,m,p);
	return(0);
}

long int power(int n, int m)
{
	if(m==0)
		return 1;
	else if(m==1)
		return n;
	else
		return(n*power(n,m-1));
}
