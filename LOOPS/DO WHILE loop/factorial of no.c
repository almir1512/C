#include<stdio.h>

    int main()
{
    int a=1,fact=1,num;
    printf("enter a no : ");
    scanf("%d",&num);
    do {
        fact*=a;
        a++;

    }while(a<=num);
    printf("%d! = %d",num,fact);
    return 0;
}
