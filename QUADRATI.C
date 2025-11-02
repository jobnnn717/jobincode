#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d,root1,root2;
clrscr();
printf(" enter a b and c:");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
root1=(-b+sqrt(d))/2*a;
root2=(-b-sqrt(d))/2*a;
printf("root1=%d\n",root1);
printf("root2=%d",root2);
}
else if(d==0)
{
root1=-b/2*a;
printf("real and equal=%d",root1);
}
else
{
printf("imaginary number");
}
getch();
}