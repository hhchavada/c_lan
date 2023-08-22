#include<stdio.h>
 int add(int x,int y)

{
	int t;
	t=x+y;
	return t;
}
  int main()


{
  int a,b;
  printf("enter a and b:");
  scanf("%d%d",&a,&b);
  int p = add(a,b);
  printf("addition of x and y is %d",p);
}