#include<stdio.h>
#include<stdlib.h>
#define Max 10

int m[Max][Max];
int p[Max];
int s[Max][Max];

void matrix(int );
void paranthesis(int , int);


void matrix(int l)
{
	int n, i, j, k,q;
	n=l-1;
	for(i=1; i<=n;i++)
	{
		m[i][i]=0;
	}
	for(l=2 ;l<=n;l++)
	{
		for(i=1;i<=n-l+1;i++)
		{
			j=i+l-1;
			m[i][j]=99999;
		
		
			for(k=i;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+p[i-1]*p[j]*p[k];
				if(m[i][j]<q)
					m[i][j]=q;
				s[i][j]=k;
			}
		}
	}	

}



void paranthesis(int i, int j)
{
	if(i==j)
		printf("A%d",i);
	else
	{	
		printf("(");
		paranthesis(i,(s[i][j]));
		paranthesis((s[i][j])+1,j);
		printf(")");		
	}
}


int main()
{
	int i,n;
	printf("\n Enter the no of elements of the p array:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the element at p[%d]:\t",i);
		scanf("%d",&p[i]);
	}
	matrix(n);
	paranthesis(1,4);
	return 0;
}
