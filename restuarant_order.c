int main()
{
int b,f,p,s,price_burger,price_french_fries,price_pizza,price_sandwiches;
char ch,B,F,P,S;
printf("\n1=burger \n2=frenchfries \n3=pizza \n4=sandwiches \n");
printf("enter your order \n please enter the choice 1,2,3,4\n");
scanf("%d",&ch);
switch (ch)
{
case 1:
printf("your order is burger\n");
printf("please enter your quantity");
scanf("%d",&b);
price_burger=200*b;
printf("your total charges is %d",price_burger);
break;
case 2:
   printf("your order is frenchfries\n");
printf("please enter your quantity");
scanf("%d",&f);
price_french_fries=50*f;
printf("your total charges is %d",price_french_fries);
break;
case 3:
   printf("your order is pizza\n");
printf("please enter your quantity");
scanf("%d",&p);
price_pizza=500*p;
printf("your total charges is %d",price_pizza);
break;
case 4:
   printf("your order is sandwiches\n");
printf("please enter your quantity");
scanf("%d",&s);
price_sandwiches=150*s;
printf("your total charges is %d",price_sandwiches);
break;
default:
   printf("invalid your choice");
break;
}
return 0;
}
