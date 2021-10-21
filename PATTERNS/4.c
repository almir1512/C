#include<stdio.h>

    int main()
{
    int a;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if((i+j)<=5)
                                       //   1,1   1,2   1,3   1,4   1,5
            {                          //   2,1   2,2   2,3   2,4   2,5
                printf(" ");           //   3,1   3,2   3,3   3,4   3,5
                                       //   4,1   4,2   4,3   4,4   4,5
            }                          //   5,1   5,2   5,3   5,4   5,5
            else{
                printf("*");
            }
       }
         printf("\n");
    }
    return 0;
}
