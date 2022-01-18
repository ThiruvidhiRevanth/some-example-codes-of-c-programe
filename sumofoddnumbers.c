#include<stdio.h>
int main(){
int i,n ,sum=0;
printf("input");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",2*i+1);
sum+=2*i+1;
}
printf("%d",sum);
}
