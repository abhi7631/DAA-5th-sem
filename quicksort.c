#include<stdio.h>

void quick_sort(int [],int,int);
int partition(int [],int,int);

main()
{
        int i,a[10],n;

        printf("Enter the no. of element you want to sort");
        scanf("%d",&n);

        printf("Enter the element in the array\n");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);

        quick_sort(a,0,n-1);

        printf("Sorted List is::");
        for(i=0;i<n;i++)
                printf("%d ,",a[i]);
}

void quick_sort(int a[],int p, int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quick_sort(a,p,q-1);
		quick_sort(a,q+1,r);
	}
}

int partition(int a[],int p,int r)
{
	int i,j,t;
	i=p;
	
	for(j=p+1;j<=r;j++)
	{
		if(a[j]<a[p])
		{
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
	t=a[i];
	a[i]=a[p];
	a[p]=t;

	return i;
}
