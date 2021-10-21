#include<stdio.h>

    int main()
{

    int a,n,prime=1;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(a=2;a<n;a++)
    {
        if(n%a==0)
        {
            prime=0;
            break;
        }

    }
    if(prime==0)
    {
        printf("COMPOSITE NUMBER");
    }
    else if(n==1)
    {
        printf("NOR PRIME NOR COMPOSITE");
    }
    else
    {
        printf("PRIME NUMBER");
    }
    return 0;
}
