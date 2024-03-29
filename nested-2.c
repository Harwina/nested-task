#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("enter the value of A=");
	scanf("%d",&a);
	printf("enter the value of B=");
	scanf("%d",&b);
	printf("enter the value of C=");
	scanf("%d",&c);
	printf("enter the value of D=");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			printf("maximum value is %d",a);
			else
			{
				printf("maximum value is %d",d);
			}
		}
		else
		{
			if(c>d)
			printf("maximum value is %d",c);
			else
			{
				printf("maximum value is %d",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			printf("maximum value is %d",b);
			else
			{
				printf("maximum value is %d",d);
			}
		}
		else
		{
			if(c>d)
			printf("maximum value is %d",c);
			else
			{
				printf("maximum value is %d",d);
			}
		}	
	}
}