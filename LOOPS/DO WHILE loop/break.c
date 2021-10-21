#include<stdio.h>

int main()
{
    int a=1;
    do{
            if(a==3)
            {
                printf("\n%d",a);
                break;
            }
       a++;
    }while(a<5);

    return 0;
}
