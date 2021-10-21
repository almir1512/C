// c program to satisfy for driving
#include <stdio.h>

int main()
{
    int a;
    int b=0;
    b=1;                              //special VIP pass
    printf("enter age: ");
    scanf("%d", &a);

    if ((a >= 18 && a <= 70) || b==1)
    {
        printf("you can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}