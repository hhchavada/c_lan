#include<stdio.h>
int main()
{
 int a[5][5],b[5][5],total[5][5];
 int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value 1: ");
			scanf("%d",&a[i][j]);
		}

	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value 2 : ");
			scanf("%d",&b[i][j]);
		}

	}
	

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",a[i][j]);
				
			}
		 	printf("\t");
			for(j=0;j<3;j++)
			{
				printf("%d ",b[i][j]);
			}
		
			printf("\t");
			for(j=0;j<3;j++)
			{
			total[i][j]=a[i][j]+b[i][j];
				printf("%d ",total[i][j]);
			}
			printf("\n");
		}
}
