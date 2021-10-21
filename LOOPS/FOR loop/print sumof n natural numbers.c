#include<stdio.h>

    int main()
{
    int a,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        sum+=a;     // sum= sum + a --> assignment operator
    }
    printf("The sum of 1 to %d : %d",n,sum);
    return 0;
}
