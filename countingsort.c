#include<stdio.h>
int k;
void counting(int [],int);
main()
{
	int i,n,a[30];
	printf("\nEnter the no of element u want to sort: ");	
	scanf("%d",&n);
	printf("Enter the element in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",i);
		scanf("%d",&a[i]);
	}                                                                            
	counting(a,n);
	
}
void counting(int a[],int n)
{	
	int i,j;
	int c[30],b[30];
	k=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>k)
			k=a[i];
	}
	for(i=0;i<=k;i++)
		c[i]=0;
	for(j=0;j<n;j++)
		c[a[j]]=c[a[j]]+1;
	for(i=0;i<=k;i++)
		printf("%d",c[i]);
	for(j=1;j<=k;j++)
		c[j]=c[j]+c[j-1];
	for(i=(n-1);i>=0;i--)
	{
		b[c[a[i]]]=a[i];
		c[a[i]]=c[a[i]]-1;
	}
	for(i=1;i<=n;i++)
		printf("%5d",b[i]);
}
