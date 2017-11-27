#include<stdio.h>
#include<time.h>

int fibo(int);

main()
{
	int n,i,l;
	clock_t start,stop;	
	double t;
	printf("Enter the value of n: ");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		start=clock();
		l=fibo(i);
		stop=clock();
		t=(double)(stop-start)/CLOCKS_PER_SEC;
		printf("\n%lf\t\t%d",t,l);
	}	
}
int fibo(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return(fibo(n-2)+fibo(n-1));
}
