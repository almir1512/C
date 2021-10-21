#include<stdio.h>
int factorial(int x);

int main()
{
    int a=5;   //calling the function
    printf("factorial of %d is %d",a,factorial(a));
    return 0;
}

int factorial(int x)
{
    printf("\nfactorial(%d)",x);
    if(x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return factorial(x-1) * x;
    }
}
