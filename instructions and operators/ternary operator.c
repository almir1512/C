#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter two numbers : ");
scanf("%d %d",&a,&b);

c=b?:a;
printf("smaller number is: %d",c);
}
