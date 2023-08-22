// switch case -> menu driven program

#include<stdio.h>
int main()
{
	int a=13,b=15,ch;
	printf("1. addition\n");
	printf("2. substraction\n");
	printf("3. multiplication\n");
	printf("4. division\n");
	printf(" enter your choice");
	scanf("%d",&ch);
switch(ch)
	{
		case 1:
		printf("adition of a and b is : %d\n",a+b);
		break;

		case 2:
		printf("substraction of a and b is : %d\n",a-b);
		break;

		case 3:
		printf("multiplication of a and b is : %d\n",a*b);
		break;
	
		case 4:
		printf("division of a and b is : %d\n",a/b);
		break;

		default:
		printf("choice is wrong");
		break;
	}
}