#include<stdio.h>
#include<conio.h>

void main ()
{
clrscr();
int a,b;
for(a=1;a<=5;a++)
{
for(b=1;b<=a;b++)
{
printf("%d",b);
}
printf("\n");
}
getch();
}