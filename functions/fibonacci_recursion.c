#include<stdio.h>
int fibonacci(int a);
    int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The nth element of Fibonacci series : %d",fibonacci(n));
    return 0;
}

int fibonacci(int a)
{
    if(a<=1)
    {
        return a;
    }
    else{
    return fibonacci(a-1)+fibonacci(a-2);
    }
}