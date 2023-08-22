#include<stdio.h>
int main()
{
  char str[20];
	
	printf("enter your string : ");
	gets(str);

	printf("your string is : %s\n",str);

	int i=0;
	while(str[i] !='\0'){
	i++;
	}
	printf("\nlenght is : %d",i);
}