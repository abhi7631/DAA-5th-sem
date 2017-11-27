#include<stdio.h>
void toh(int,char,char,char);
main()
{
	int n;
	printf("Enter the no. of Disc: ");
	scanf("%d",&n);
	printf("The steps are\n");
	toh(n,'S','D','A');
}
void toh(int n,char source,char dest,char aux)
{
	if(n==1)
		printf("%c-> %c\n",source,dest);
	else
	{
		toh((n-1),source,aux,dest);
		toh(1,source,dest,aux);
		toh((n-1),aux,dest,source);
	}
}
