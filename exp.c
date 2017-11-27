#include<stdio.h>

power(int base,int pow)
{
	int n;
	if(pow==0)
		return 1;
	else
	{
		if(pow%2==0)
		{
			n=power(base,pow/2);
			return(n*n);
		}
		else
		{
			n=power(base,pow/2);
			return(base*n*n);
		}
	}
}

main()
{
        int base,pow,res;

        printf("\nENTER THE BASE: ");
        scanf("%d",&base);

        printf("\nENTER THE EXPONENT: ");
        scanf("%d",&pow);
	
        res=power(base,pow);
        printf("\nAnswer of %d^%d is %d\n",base,pow,res);

}     
