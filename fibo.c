#include<stdio.h>

void toh(int ,char , char, char);

int main()
{
	int n;
	printf("\n Enter the no of pegs:\t");
	scanf("%d",&n);
	toh(n,'S','A','D');
	return 0;
}


void toh(int n,char s, char a, char d)
{
	if(n==1)
	{
			printf("\n%c-->%c",s,d);
			return;	
	}
	toh(n-1,s, d,a );
	printf("\n%c-->%c",s,a);
	toh(n-1,a,s,d);
	return;
}	
