#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	/*input three numbers from user*/
	printf("enter three numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num2)
		{
			/* if num1>num2 and num2>num3*/max=num1;
		}
		else
		{
			/*num1>num2 but num1>num3 is not true*/
			max=num3;
		}
	}
	else
	{
		if(num2>num3)
		{
			/*if num1 is not>num2 and nukm2>num3*/
			max=num2;
		}
		else
		{
			/* if num1 is not>num2 and num2>num3*/
		}
	}
	/*print maxmium value*/
	printf("maximum of all three numbers=%d",max);
	return 0;
}
