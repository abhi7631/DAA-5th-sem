#include<stdio.h>
#include <stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	int i,**mat,n,j,k;
	if(argc!=2)
	{
		printf(" Invalid no of arguments");
		exit(0);
	}
	fp=fopen(argv[1],"r");
	if(argv==NULL)
	{
		printf("file not found");
		exit(0);
	}
	fscanf(fp,"%d",&n);
	mat=(int **)calloc (sizeof(int*),n);
	for(i=0;i<n;i++)
		*(mat+i)=(int *)calloc(sizeof(int),n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fscanf(fp,"%d",&mat[i][j]);
		}
	}      
	
	for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("\t%d",mat[i][j]);
                }
		printf("\n");
        }
	for(k=0;k<n;k++)
	{	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(mat[i][j]>mat[i][k]+mat[k][j])
				{
					mat[i][j]=mat[i][k]+mat[k][j];
				
				}
			}                        
		}
	} 
	printf("Sortest path is:\n");
	 for(i=0;i<n;i++)
                {
                        for(j=0;j<n;j++)
			{
				printf("\t%d",mat[i][j]);
			}
			printf("\n");
		}

}
