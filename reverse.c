#include<stdio.h>
int main()
{
  char str1[20],str2[20];
  int i,j,a=0;
	
	printf("enter your string : ");
	gets(str1);

	printf("your string is : %s\n",str1);
	
	for(a=0;str1[a]!='\0';a++);
	j=a;

	for(i=0;i<a;i++)
	{
		str2[i]=str1[--j];
	}
	str2[i]='\0';

	printf("\nreverse string : %s",str2);
	
}

