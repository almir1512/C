#include<stdio.h>

    int main()
{
    int a;
    printf("Enter year: ");
    scanf("%d",&a);

    if(a%4==0)
    {
        printf("Leap year");
    }
    else
    {
    printf("not a leap year");
    }
    return 0;
}
