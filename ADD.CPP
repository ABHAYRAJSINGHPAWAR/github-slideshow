/*Author: abhay raj singh*/
/*program: for addition*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter two number");
scanf("%d%d",&a,&b);
c=a+b;
printf("adition is %d of location %d",c,&c);
getch();
}