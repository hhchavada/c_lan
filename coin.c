#include<stdio.h>
int main()
{
  int a[9],n,i;
  i=500,200,100,50,20,10,5,2,1;

  printf("enter your amount :");
  scanf("%d",&n);
  for(i=n;n>a[i];n++)
  {
	printf("no of note %d",n);
  }
	n=n%a[i];
	printf("%d",i);
}

