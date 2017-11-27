#include<stdio.h>

void merge_sort(int [],int,int);
void merge(int [],int,int,int);

main()
{
	int i,a[10],n;

	printf("Enter the no. of element you want to sort");
	scanf("%d",&n);

	printf("Enter the element in the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	merge_sort(a,0,n-1);
	
	printf("Sorted List is::");
	for(i=0;i<n;i++)
                printf("%d ,",a[i]);
}

void merge_sort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}

void merge (int a[],int p,int q,int r)
{
	int i,j,n1,n2,l[10],Ri[10],k;

	n1=q-p+1;
	n2=r-q;

	for(i=0;i<n1;i++)
		l[i]=a[p+i];
	
	for(j=0;j<n2;j++)
		Ri[j]=a[q+j+1];
	
	l[n1]=999;
	Ri[n2]=999;
	i=0;
	j=0;

	for(k=p;k<=r;k++)
	{
		if(l[i]<Ri[j])
			a[k]=l[i++];
		else
			a[k]=Ri[j++];
	}
}	
	
		
