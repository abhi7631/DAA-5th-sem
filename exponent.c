#include<stdio.h>
int expo(int x,int n)
{

        if(n==0)
                return 1;

        else
        {
                if (n%2==0)
                        return(expo(x,n/2)*expo(x,n/2));
                else
                        return(x*expo(x,n/2)*expo(x,n/2));
        }
}    
main()
{
	int b,p,result;
	printf("Enter the value of x: ",&b);
	scanf("%d",&b);
	printf("Enter the value of p: ");
	scanf("%d",&p);
	result=expo(b,p);
	printf("Answer is : %d",result);
	
}

