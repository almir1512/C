
#include<stdio.h>
int sum(int a);

    int main()
{
    int a;
    printf("enter the value of n : ");
    scanf("%d",&a);
    printf("Sum of first %d natural numbers = %d",a,sum(a));

    return 0;
}
int sum (int a)
{
    if(a==0)
    {
        return 0;
    }
    else{
    return sum(a-1)+a;
    }
}
