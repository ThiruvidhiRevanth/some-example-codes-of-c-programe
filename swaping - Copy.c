#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("enter two numbers:-\n");
	printf("first number:");
	scanf("%d",&num1);
	printf("second number:");
	scanf("%d",&num2);
	printf("\n before swap:\n");
	printf("first number=%d\t second number=%d",num1,num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\n\n after swap:\n");
	printf("first number =%d\t second number=%d",num1,num2);
	return 0;
}
