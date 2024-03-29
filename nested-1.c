#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value of A=");
	scanf("%d",&a);
	printf("enter value of B=");
	scanf("%d",&b);
	printf("enter value of C=");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
		    	printf("minimum value is  %d",a);
		}
		else
		{
			printf("mminimum value is %d",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("minimum value is %d",b);
		}
		else
		{
			printf("minimum value is %d",c);
		}
	}
	
}