#include<stdio.h>

    int main()
{
    int a=1,n,factorial=1;
    printf("enter n! : ");
    scanf("%d",&n);

    while(a<=n)
    {
        factorial*=a;
        a++;
    } 
    printf("%d! = %d",n,factorial);
    return 0;
}