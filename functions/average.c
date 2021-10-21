#include<stdio.h>
double avg(int  a, int  b, int  c);

    int main()
{
    int a,b,c;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);
    printf("Enter third number = ");
    scanf("%d",&c);
    printf("Average = %f",avg(a,b,c));
    return 0;
}

double avg(int  a, int  b,int  c)
{
    return (double)(a+b+c)/3;
}
