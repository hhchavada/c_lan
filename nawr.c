#include<stdio.h>
int add()
{
  int a,b;
  printf("enter a :");
  scanf("%d",&a);
  printf("enter b :");
  scanf("%d",&b);
  
  return a+b;
}

	int main()
{
	 int x=add();
	printf("adition of a and b is %d",x);

}