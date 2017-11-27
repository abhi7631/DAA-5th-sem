#include<stdio.h>
void heap_sort(int [], int);
void buildmaxheap(int [],int);
void maxheapi(int [],int,int);
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
	heap_sort(a,n);
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
}
void heap_sort(int a[],int n)
{
	int i,temp=0,x=n;
	buildmaxheap(a,n);
	for(i=n;i>=1;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		x=x-1;
		maxheapi(a,x,0);
	}
}
void buildmaxheap(int a[],int n)
{
	int i;
	for(i=n/2;i>=0;i--)
		maxheapi(a,n,i);
}
void maxheapi(int a[],int n,int i)
{
	int l,r,lrg,temp=0;
	l=2*i+1;
	r=2*i+2;
	if(l<=n && a[l] > a[i])
		lrg=l;
	else 
		lrg=i;
	if(r<=n && a[r]>a[lrg])
		lrg=r;
	if(lrg!=i)
	{
		temp=a[i];
		a[i]=a[lrg];
		a[lrg]=temp;
		maxheapi(a,n,lrg);
	}	
		
}
