#include<stdio.h>

    int main()
{
    int a=1,n,sum=0;
    printf("enter n: ");
    scanf("%d",&n);
    while(a<=n)
    {
        sum+=a;
        a++;
    }
    printf("sum of 1 to %d = %d",n,sum);
    return 0;
}
