#include<stdio.h>
void main()
{
int a,b,c,r;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&a,&b);
do
{
printf("\n1-addition\n2-substraction\n3-multiplication\n4-division\n5-exit");
printf("\nenter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:r=a+b;
printf("ans=%d",r);
break;
case 2:r=a-b;
printf("ans=%d",r);
break;
case 3:r=a*b;
printf("ans=%d",r);
break;
case 4:r=a/b;
printf("ans=%d",r);
break;
}
}while(c!=5);
getch();
}