#include<stdio.h>
#include<math.h>
int main()
{
	int a,u,t;
	float d;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of u");
	scanf("%d",&u);
	printf("enter the value of t");
	scanf("%d",&t);
	d=u*t+0.5*a*pow(t,2);
	printf("r:%f",d);
	return 0;
}
