#include<stdio.h>

    int main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("EVEN NUMBER");
    }
    else
    {
        printf("ODD NUMBER");
    }
    return 0;
}