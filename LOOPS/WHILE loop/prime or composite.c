#include<stdio.h>

    int main()
{

    int a=2,n,abc=1;
    printf("enter any number : ");
    scanf("%d",&n);
    while(a<n)
    {
        if(n%a==0)
        {
            abc=0;
            break;
        }
        a++;
    }
    if(abc==0)
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
