#include<stdio.h>

int main()
{
    int a=0;
    while(a<=5)
    {
        a++;
        if(a!=4)
        {
             continue;
        }
        else{
            printf("%d",a);
        }
    }
    return 0;
}
