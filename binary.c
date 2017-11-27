#include<stdio.h>
int i,a[10],key;
int iterative (int);
int recursive (int,int,int);
main()
{
	int ch,lb=0,ub=9,pos=-1;
	printf("Enter the element in array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter ur choice:\n1.iterative\n2.recursive\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("enter the search key");
        		scanf("%d",&key);
			iterative(key);
			break;
		case 2:
			printf("enter the search key");
			scanf("%d",&key);
			pos=recursive(key,lb,ub);
			if (pos==-1)
				printf("Element not found");
			else
				printf("Element mount at pos %d",pos);
			break;
		default:
			printf("wrong choice");
	}
}
iterative(int key)
{
	int lb=0,ub=9,mid, pos=-1;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]>key)
			ub=mid-1;
		else if(a[mid]<key)
			lb=mid+1;
		else if(a[mid]==key)
			{pos=mid;
			break;}
	}
	if(pos==-1)
		printf("\nElement not found");
	else
		printf("\nElement found at index %d", pos);
}
int recursive(int key,int lb,int ub)
{
	int mid;
	mid=(lb+ub)/2;
	if(a[mid]==key)
		return mid;
	else if(a[mid]>key)
		return recursive(key,lb,mid-1);
	else if(a[mid]<key)
		return recursive(key,mid+1,ub);
}
