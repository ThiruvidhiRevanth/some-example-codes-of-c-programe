#include<stdio.h>
void main()
{
	int j,n;
	printf("input the number(table to be calculated):");
	scanf("%d",&n);
	printf("\n");
	for(j=1;j<=20;j++)
	{
		printf("%d*%d=%d\n",n,j,n*j);
	}
	
}
