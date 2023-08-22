#include<stdio.h>
void even()
{
	int i,n;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=0;i<n;i+=2)
	{
		printf("%d",i);
	}
 }
void odd()
{
	int i,n;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<n;i+=2)
	{
		printf("%d",i);
	}
  
}

int main()
{
	int x;
	printf("enter odd ya even no : ");
	scanf("%d",&x);
	if(x%2!=0)
	{
		odd();
	}
	 else
	{
		even();
	}
	
	
}