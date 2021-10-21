#include<stdio.h>

    int main()
{
    int a=20;
    int *ptr= &a;
    printf("the value of ptr is %d",ptr);
    ptr= ptr + 3;
    printf("\nthe value of ptr is %d",ptr);

    printf("\n \nSubtracting a no from pointer!");

    printf("\nthe value of ptr is %d",ptr);
    ptr= ptr - 1;
    printf("\nthe value of ptr is %d",ptr);




    return 0;
}
