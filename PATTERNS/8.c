#include<stdio.h>

    int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int space=1;space<=(5-i);space++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int space=1;space<=(5-i);space++)
        {
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
