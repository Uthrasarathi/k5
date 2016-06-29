#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d %d %d",&a,&b,&c);
printf("a=%d,b=%d,c=%d",a,b,c);
if(a>b)
{
if(a>c)
printf("a is largest %d",a);
else
printf("c is largest %d",c);
}
else
{
if(c>b)
printf("c is larger %d",c);
else
printf("b is largest %d",b);
}
getch();
}
