#include <stdio.h>

int reverse()
{

    int Num, rev = 0, last;

    printf("Enter the number to reverse: ");

    scanf("%d", &Num);


    

    while (Num != 0){

        last = Num % 10;

        rev = rev * 10 + last;

        Num = Num/10;

    }    


    printf("The reversed number is: %d", rev);

    

}

int main()
{
	reverse();
}