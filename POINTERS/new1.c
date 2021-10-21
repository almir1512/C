#include<stdio.h>
int times(int *a);
int times1(int a);

    int main()
{
    int a=7;
    printf("\nthe value of variable a is %d",a);
    times(&a);
    printf("\n\nafter function call by reference! ");
    printf("\n\nthe value of variable a is %d",a);
    return 0;
}
int times(int *a)
{
    *a *= 10;
    return a;
}
int times1(int a)
{
    a *= 10;
    return a;
}
