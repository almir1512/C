#include<stdio.h>

    int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if((i==5) || (j==1) || i==j)
            {printf("* ");}
            else
            {printf("  ");}
        }
        printf("\n");
    }
    return 0;
}
