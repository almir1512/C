#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int i1=0; i1 < (2*i-1) ; i1++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
