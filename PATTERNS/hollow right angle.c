#include<stdio.h>

    int main()
{
    int a;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || i==5 || i==j){
            printf("* ");}
            else{printf("  ");}
        }
        printf("\n");
    }
    return 0;
}
