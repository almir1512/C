#include<stdio.h>

    int main()
{
    int a=1,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);

    do
    {
        sum+=a;a++;
    } while (a<=n);
    printf("sum of 1 to %d = %d",n,sum);
    return 0;
}
