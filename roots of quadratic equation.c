#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float root,r;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	r=sqrt((b*b)-4*a*c);
	root=-b+r-r/2*a;
	printf("r:%f",root);
	return 0;
}
