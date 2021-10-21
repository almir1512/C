#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,res1,res2;
printf("enter four integer numbers : ");
scanf("%d %d %d %d",&a,&b,&c,&d);

res1=a<b && c>=d;
printf("%d",res1);

res2=c<=b || a>=d;
printf("\n%d",res2);

getch();
}
