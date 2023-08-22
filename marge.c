#include<stdio.h>

int main()
{
  char str[20],str2[20];
  int i=0,j=0;		
	printf("enter your string 1: ");
	gets(str);

	printf("enter your string 2 : ");
	gets(str2);

	while(str[i]!='\0'){
	i++;
	}
	
	while(str2[j]!='\0'){
	str[i++]=str2[j++];
	}
	str[i]='\0';
	printf("marge :%s",str);

}
	