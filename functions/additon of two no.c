#include<stdio.h>
int sum(int a,int b);

    int main()
{
    int c;
    c = sum(2, 500); //arguments
    printf("sum = %d",c);
    return 0;
}
int sum(int a, int b) //parameters
{
    int c=a+b;
    return c;
}
