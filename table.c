// goto(jump)

#include<stdio.h>
int main()
{
	int i=1,n,ans;
	printf("enter your number of table");
	scanf("%d",&n);
	table:
	

		if(i<=10){
		ans=n*i;
		printf("%d * %d =%d\n",n,i,ans);
		i++;
		goto table;
	}
}