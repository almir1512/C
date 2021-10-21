#include<stdio.h>

int main()
{
    int a=6;
    int *a1;
    a1=&a;
    printf("the address of the variable a is %u \n",a1);

    printf("the value of the variable a is %d",*a1);
    return 0;
}
