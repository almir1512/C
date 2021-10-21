#include<stdio.h>

    int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int sp=1;sp<=(5-i);sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=((5*2)-(2*i-1));j++)
        {
            if(i==5 || j==1 || j==((5*2)-(2*i-1))){
            printf("*");}

            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
