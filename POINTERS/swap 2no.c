#include<stdio.h>
void wrong_swap(int a,int b); //calling by value
void swap(int *a,int *b);

int main()
{
    int a=1,b=2;
    printf("Before swapping\n");
    printf("a = %d and b = %d",a,b);
    swap(&a,&b);
    printf("\n\nAfter swapping\n");
    printf("a = %d and b = %d",a,b);
    return 0;
}

void wrong_swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
