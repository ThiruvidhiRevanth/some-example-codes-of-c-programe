#include<stdio.h>
int main()
{
	float celsius,farenheit;
	printf("\nenter temperature in celsius:");
	scanf("%f",&celsius);
	farenheit=(1.8*celsius)+32;
	printf("\n temperature in farenheit:%f",farenheit);
	return 0;
}
