#include<stdio.h>
void chain_matrix(int [],int);
void print_optimal(int,int);
int m[10][10],s[10][10];
main()
{
	int arr[]={10,20,50,1,100,1000};
	int n=6;
	chain_matrix(arr,6);
	print_optimal(1,5);
	
	
} 
void chain_matrix(int p[],int n)
{
	int i,j,l,k,q;
	for(i=1;i<=n;i++)
		m[i][i]=0;
	for(l=2;l<=n;l++)
	{
		for(i=1;i<=n-l+1;i++)
		{
			j=i+l-1;
			m[i][j]=9999;
			for(k=1;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<=m[i][j])
				{
					m[i][j]=q;
				}
					s[i][j]=k;
			}
		}
	}
}
void print_optimal(int i,int j)
{
	if(i==j)
	{
		printf("A%d",i);
	}
	else
	{
		printf("(");
		print_optimal(i,s[i][j]);
		print_optimal(s[i][j]+1,j);
		printf(")");
	}
}

