#include<stdio.h>
int a[10],i,key;
int iterative(int);
int recursive(int,int);
main()
{
	int ch,pos=0,s=-1;
	printf("Enter the element in array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter ur choice:\n1.iterative\n2.recursive\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			iterative(key);
			break;
		case 2:
			printf("enter the search key");
			scanf("%d",&key);
			s=recursive(key,pos);
			if(s==-1)
				printf("Element not found");
			else
				printf("Element found at %d",s);
			break;
		default:
			printf("wrong choice");
	}
}
int iterative(int key)
{
	int s=0;




	for(i=0;i<10;i++)
	{
		if(key==a[i])
		{	
			s=1;
			break;
		}
	}
	if(s==1)
		printf("Element found in position %d",i);
	else
		printf("element not found");

}
int recursive(int key,int pos)
{
	
	if (key==a[pos])
		return pos;
	if(key!=a[pos])
		return recursive(key,pos+1);
	
}










