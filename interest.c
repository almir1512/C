#include<stdio.h>

    int main()
{
    int principal=100,rate=4 ,years=1,SI;
    SI= (principal* rate* years)/100;
    printf("simple interest: %d",SI);
    return 0;
}