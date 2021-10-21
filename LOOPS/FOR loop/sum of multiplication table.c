#include<stdio.h>

    int main()
{
    int a,n,sum=0,product;
    printf("enter n : ");
    scanf("%d",&n);

    for(a=1;a<=15;a++)
    {
        product=n*a;
        sum+=product;
        printf("\n%d X %d = %d",n,a,product);
    }

    printf("\nsum of multiples of %d = %d",n,sum);
    return 0;
}
