#include<stdio.h>
void main()
{
	int  price[5],qty[5],amt,disc,discamt,gst,billamt,i;
	

     for(i=0;i<5;i++)
	{
		printf("value price[%d] : ",i);
		scanf("%d",&price[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("value qty[%d] : ",i);
		scanf("%d",&qty[i]);
	}
	

	
	printf("price\tqty\tamt\tdisc\tdiscamt\tgst\tbillamt");
	for(i=0;i<5;i++)
	{
		amt=price[i]*qty[i];
		disc=amt*10/100;
		discamt=amt-disc;
		gst=discamt*18/100;
		billamt=discamt+gst;


		printf("\n\n%d\t%d\t%d\t%d\t%d\t%d\t%d",price[i],qty[i],amt,disc,discamt,gst,billamt);
	}	
}
